/*
Write a C program to demonstrate Call by Value and Call by Reference
*/

#include <stdio.h>

void callByValue(int a) {
    a = a + 10;
    printf("Inside Call by Value: %d\n", a);
}

void callByReference(int *a) {
    *a = *a + 10;
    printf("Inside Call by Reference: %d\n", *a);
}

int main() {
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    callByValue(x);
    printf("After Call by Value: %d\n", x);

    callByReference(&x);
    printf("After Call by Reference: %d\n", x);

    return 0;
}
