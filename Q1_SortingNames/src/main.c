#include <stdio.h>
#include <string.h>
#include "../include/sort.h"
#include "../include/count.h"
#include "../include/utils.h"

int main() {
    char names[100][50] = {"Alice", "Bob", "Charlie", "David", "Eve"}; // Example names
    int n = 5; // Initial number of names

    printf("Choose an option:\n");
    printf("1. Sort Names\n");
    printf("2. Count Names\n");
    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter sorting order (asc/desc): ");
        char order[10];
        scanf("%s", order);

        if (strcmp(order, "asc") == 0) {
            sortAscending(names, n);
        } else if (strcmp(order, "desc") == 0) {
            sortDescending(names, n);
        } else {
            printf("Invalid sorting order.\n");
            return 1;
        }

        printf("Sorted Names:\n");
        displayNames(names, n);
    } else if (choice == 2) {
        int total = countNames(names, 100);
        printf("Total Names: %d\n", total);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}

