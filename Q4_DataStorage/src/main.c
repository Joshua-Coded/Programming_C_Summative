#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/student.h"

// function to input data for a single student
void inputStudentData(Student* student) {
printf("Enter student full name: ");
getchar();
fgets(student->name, sizeof(student->name), stdin);


// remove the trialing newline
size_t len = strlen(student->name);
if (len > 0 && student->name[len - 1] == '\n') {
student->name[len - 1] = '\0';
}

printf("Enter student grade for Programming in C (/100): ");
scanf("%d", &student->programmingGrade);


printf("Enter student grade for Mobile Application Development (/100): ");
scanf("%d", &student->mobileGrade);

printf("Enter student grade for Introduction to  Blockchain Development (/100): ");
scanf("%d", &student->blockchainGrade);
}

// function to save student data to a file

void saveStudentsToFile(Student* students, int count, const char* filename) {
FILE* file = fopen(filename, "w");
if(!file) {
perror("Failed to open file");
exit(1);
}


fprintf(file, "Name, Programming in C, Mobile App Development, Blockchain Development\n");

for (int i = 0; i < count; i++) {
fprintf(file, "%s, %d, %d, %d\n", students[i].name, students[i].programmingGrade, students[i].mobileGrade, students[i].blockchainGrade);

}

fclose(file);
printf("Data saved successfully to %s\n", filename);
}

int main() {

int n;

printf("Enter the number of students (5 < n < 100): ");
scanf("%d", &n);

if (n <= 5 || n >= 100) {
printf("Invalid number of Students. Please enter a value between 5 and 100");
return 1;
}


// ALLOCATE MEMORY FOR STUDENTS

Student* students = (Student*)malloc(n * sizeof(Student));

if (!students) {
perror("Memory Allocation failed, try again");
return 1;
}

// input the data for all students

for (int i = 0; i < n; i++) {
printf("\nEntering data for students %d:\n", i + 1);
inputStudentData(&students[i]);
}

// then save data to file
const char* filename = "students.txt";

// call the function to save data to file
saveStudentsToFile(students, n, filename);

// free the memory
free(students);
return 0;
}
