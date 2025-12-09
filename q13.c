/*
write a C program to maintain a simple employee database using file handling by
performing operations such as opening a file, adding new employee records, and
displaying all stored employee details to ensure data persistence.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FNAME "emp.txt" 

struct E { 
    int id;
    char n[50];
    float s;
};

void add() {
    FILE *f = fopen(FNAME, "a");
    struct E e;
    if (f == NULL) { printf("File Error.\n"); return; }
    printf("ID, Name, Salary: ");
    scanf("%d", &e.id);
    while (getchar() != '\n');
    fgets(e.n, sizeof(e.n), stdin);
    e.n[strcspn(e.n, "\n")] = 0;
    scanf("%f", &e.s);
    fprintf(f, "%d,%s,%.2f\n", e.id, e.n, e.s);
    fclose(f);
    printf("Added.\n");
}

void disp() {
    FILE *f = fopen(FNAME, "r");
    char l[100];
    if (f == NULL) { printf("No records.\n"); return; }
    printf("\n--- Records ---\n");
    while (fgets(l, sizeof(l), f) != NULL) {
        printf("%s", l);
    }
    fclose(f);
}

int main() {
    int c;
    do {
        printf("\n1. Add 2. Display 3. Exit\nChoice: ");
        scanf("%d", &c);
        if (c == 1) add();
        else if (c == 2) disp();
        else if (c != 3) printf("Invalid.\n");
    } while (c != 3);
    return 0;
}