/*
Write a C program that performs basic string operations using predefined functions of string.h.
Requirements:
1. Find and display the length of each string
2. Compare the two strings and display whether they are equal or not
*/

#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    printf("Length of s1 = %lu\n", strlen(s1));
    printf("Length of s2 = %lu\n", strlen(s2));

    if(strcmp(s1, s2) == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are Not Equal\n");

    return 0;
}
