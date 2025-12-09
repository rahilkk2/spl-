/*
Program to demonstrate Structure
Write a C program to store and display information of an employee using structures.
Requirements:
a) Define Employee structure with ID, Name, Department, Salary
b) Read and store details of a single employee
c) Display employee information
*/



#include <stdio.h>

int main() {

int id; char name [50], dept [50]; float sal;

printf("ID: "); scanf("%d", &id);
printf("Name: "); scanf("%s", name);
printf("Dept: "); scanf("%s", dept);
printf("Salary: "); scanf("%f", &sal);
printf("\n--Info\nID: %d\nName: %s\nDept: %s\nSalary: %.2f\n",
id, name, dept, sal);

}

