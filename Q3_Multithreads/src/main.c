#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "../include/multithread_sum.h"

#define THREAD_COUNT 10

// Structure to hold arguments for each thread
typedef struct {
    int* array;      // Pointer to the array
    int startIndex;  // Start index of the array slice
    int endIndex;    // End index of the array slice
    long partialSum; // Partial sum computed by the thread
    int threadId;    // ID for debugging
} ThreadArgs;

// Function for each thread to compute partial sum
void computePartialSum(void* args) {
    ThreadArgs* threadArgs = (ThreadArgs*)args;
    threadArgs->partialSum = 0;

    for (int i = threadArgs->startIndex; i < threadArgs->endIndex; i++) {
        threadArgs->partialSum += threadArgs->array[i];
    }

    // Print thread information
    printf("Thread %d processed indices [%d - %d], Partial Sum: %ld\n",
           threadArgs->threadId, threadArgs->startIndex, threadArgs->endIndex - 1, threadArgs->partialSum);

    pthread_exit(0);
}

// Main function to calculate the total sum using multithreading
long calculateTotalSum(int* array, int n) {
    pthread_t threads[THREAD_COUNT];
    ThreadArgs threadArgs[THREAD_COUNT];
    int sliceSize = n / THREAD_COUNT;
    long totalSum = 0;

    // Create threads
    for (int i = 0; i < THREAD_COUNT; i++) {
        threadArgs[i].array = array;
        threadArgs[i].startIndex = i * sliceSize;
        threadArgs[i].endIndex = (i == THREAD_COUNT - 1) ? n : (i + 1) * sliceSize;
        threadArgs[i].threadId = i + 1; // Assign thread ID for debugging
        pthread_create(&threads[i], NULL, (void*)computePartialSum, (void*)&threadArgs[i]);
    }

    // Wait for threads to complete and accumulate results
    for (int i = 0; i < THREAD_COUNT; i++) {
        pthread_join(threads[i], NULL);
        totalSum += threadArgs[i].partialSum;
    }

    return totalSum;
}

int main() {
    int n;

    printf("Enter the value of n (greater than 1000): ");
    scanf("%d", &n);

    if (n <= 1000) {
        printf("Error: n must be greater than 1000.\n");
        return 1;
    }

    // Allocate and initialize the array
    int* array = (int*)malloc(n * sizeof(int));
    if (array == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        array[i] = i + 1; // Fill the array with values 1 to n
    }

    // Calculate total sum using multithreading
    long totalSum = calculateTotalSum(array, n);

    printf("Total sum of the array: %ld\n", totalSum);

    // Free allocated memory
    free(array);

    return 0;
}

