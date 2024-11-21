#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include "../include/multithread_sum.h"


#define THREAD_COUNT 10

// our structure to hold argument for each thread

typedef struct {

int* array;
int startIndex;
int endIndex;
int partialSum;
} ThreadArgs;

// function for each thread to compute partial sum

void computePartialSum(void* args) {
ThreadArgs* threadArgs = (ThreadArgs*)args;
threadArgs->partialSum = 0;

for (int i = threadArgs->startIndex; i < threadArgs->endIndex; i++) {
threadArgs->partialSum += threadArgs-array[i];
}

pthread_exit(0);

}

// function to calculate the total sum using multithreading

long calculateTotalSum(int* array, int n){
pthread_t threads[THREAD_COUNT];
ThreadArgs threadArgs[THREAD_COUNT];
int sliceSize = n / THREAD_COUNT;
long totalSum = 0;


// creating the thread

for (int i = 0; i < THREAD_COUNT; i++) {
     threadArgs[i].array = array;
     threadArgs[i].startIndex = i * sliceSize;
     threadArgs[i].endIndex = (i == THREAD_COUNT - 1) ? n : ( i + 1) * sliceSize;
     pthread_create(&threads[i], NULL, (void*)computePartialSum, (void*)&threadArgs[i]);

}

// wait for threads to complete and then accumulate results

for ( int i = 0; i < THREAD_COUNT; i++) {
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
printf("Error: n must be greater than 1000. \n");
return 1;
}

// memory allocation 

int* array = (int*)malloc(n * sizeof(int));

if (array == NULL) {
perror("Memory allocation failed");
return 1;
}

for ( int i = 0; i < n; i++) {
array[i] = i +1;
}

// let's calculate total sum using multithreading

long totalSum = calculateTotalSum(array, n);

printf("Total sum of the array: %ld\n", totalSum);

// free allocated memory
free(array);
return 0;


}
