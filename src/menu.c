#include <stdio.h>
#include "menu.h"
#include "student.h"


void menu()
{
int choice;
do
{
printf("\nMini Student Data Base\n");
printf("1. Add Student\n");
printf("2. Display Student\n");
printf("3. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);

switch (choice)
{
case 1:
addStudent();
break;

case 2:
displayStudents();
break;

case 3:
printf("Exiting Program... \n");
break;

default:
printf("Invalid choice! Please try again. \n");
}
} while (choice != 3);
}
