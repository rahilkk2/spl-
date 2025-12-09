/*
Program to demonstrate Structure
Write a C program to store and display information of an employee using structures.
Requirements:
a) Define Employee structure with ID, Name, Department, Salary
b) Read and store details of a single employee
c) Display employee information
*/

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char dept[50];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter ID, Name, Department, Salary:\n");
    scanf("%d", &e.id);
    while(getchar()!='\n'); // clear buffer
    gets(e.name);
    gets(e.dept);
    scanf("%f", &e.salary);

    printf("\nEmployee Details:\n");
    printf("ID: %d\nName: %s\nDepartment: %s\nSalary: %.2f\n", e.id, e.name, e.dept, e.salary);

    return 0;
}
