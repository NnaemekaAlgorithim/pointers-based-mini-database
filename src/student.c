#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"


/*Global pointers to store students*/
Student *students = NULL;
int studentCount = 0;

void addStudent()
{
printf("Enter student name: ");
char name[50];
scanf(" %49[^\n]", name);

printf("Enter student grade: ");
int grade;
scanf("%d", &grade);

/*Allocate memory for new student*/
void *temp = realloc(students, (studentCount + 1) * sizeof(Student));
if (temp == NULL)
{
printf("Memory allocation failed!\n");
exit(1);
}
students = temp;

/*Add the new student*/
strcpy(students[studentCount].name, name);
students[studentCount].grade = grade;

studentCount++;

printf("Student added successfully!\n");
}

void displayStudents()
{
if(studentCount == 0)
{
printf("Empty list!\n");
return;
}

printf("List of students and their scores: \n");
for(int i = 0; i < studentCount; i++)
{
printf("%d. Name: %s, Grade: %d\n", i + 1, students[i].name, students[i].grade);
}
}