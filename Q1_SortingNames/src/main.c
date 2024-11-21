#include <stdio.h>
#include <string.h>
#include "../include/sort.h"
#include "../include/count.h"
#include "../include/utils.h"

int main() {
    char names[100][50] = {
    "Joshua", "Divine", "King", "David", "Ayo", "Aaron", "Taddy", "Mary", "Grace", "Esther",
    "Paul", "Peter", "John", "James", "Matthew", "Mark", "Luke", "Timothy", "Philip", "Andrew",
    "Simon", "Jude", "Levi", "Moses", "Aaron", "Daniel", "Samuel", "Joseph", "Jonathan", "Nathan",
    "Ezekiel", "Isaiah", "Jeremiah", "Elijah", "Elisha", "Obadiah", "Micah", "Zephaniah", "Hosea", "Joel",
    "Amos", "Habakkuk", "Malachi", "Nahum", "Zechariah", "Hezekiah", "Abraham", "Isaac", "Jacob", "Noah",
    "Adam", "Eve", "Ruth", "Naomi", "Hannah", "Deborah", "Sarah", "Rachel", "Rebecca", "Leah",
    "Delilah", "Jezebel", "Gideon", "Caleb", "Joshua", "Saul", "David", "Solomon", "Abigail", "Bathsheba",
    "Tamar", "Rahab", "Boaz", "Job", "Ezra", "Nehemiah", "Esther", "Mordecai", "Haman", "Zerubbabel",
    "Jonah", "Isaiah", "Jeremiah", "Ezekiel", "Daniel", "Hosea", "Joel", "Amos", "Obadiah", "Habakkuk",
    "Zephaniah", "Haggai", "Zechariah", "Malachi", "John", "Peter", "Paul", "James", "Jude", "Luke"
};

    int n = 100; // Initial number of names

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

