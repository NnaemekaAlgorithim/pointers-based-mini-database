#ifndef STUDENT_H
#define STUDENT_H


typedef struct
{
char name[50];
int grade;
} Student;

/*Function declarations*/
void addStudent();
void displayStudents();
void findStudent();
void updateStudent();
void deleteStudent();
void freeMemory();


#endif
