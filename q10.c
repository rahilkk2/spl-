/*
Write a C program that performs basic string operations using predefined functions of string.h.
Requirements:
1. Concatenate the second string to the first and display the result
2. Copy the second string into a third string and display it
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[50], s3[50];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    // Concatenate s2 to s1
    strcat(s1, s2);
    printf("Concatenated string: %s\n", s1);

    // Copy s2 to s3
    strcpy(s3, s2);
    printf("Copied string: %s\n", s3);

    return 0;
}
