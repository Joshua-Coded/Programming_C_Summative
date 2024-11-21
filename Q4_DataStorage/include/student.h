#ifndef STUDENT_H
#define STUDENT_H

typedef struct {
char name[50];
int programmingGrade;
int mobileGrade;
int blockchainGrade;
} Student;

// function prototypes

void inputStudentData(Student* student);
void saveStudentsToFile(Student* students, int count, const char* filename);

#endif
