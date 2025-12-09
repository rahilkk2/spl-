/*
Write a C program that performs different operations on an integer array using a menu-driven approach.
Requirements:
1. Accept elements of the array
2. Display all elements
3. Find maximum and minimum element
*/

#include <stdio.h>

int main() {
    int a[50], n, i, ch;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);

    do {
        printf("\nMenu:\n1.Display\n2.Max & Min\n3.Exit\nEnter: ");
        scanf("%d", &ch);

        if(ch == 1) {
            printf("Array: ");
            for(i=0; i<n; i++) printf("%d ", a[i]);
        }
        else if(ch == 2) {
            int max=a[0], min=a[0];
            for(i=1; i<n; i++){
                if(a[i] > max) max = a[i];
                if(a[i] < min) min = a[i];
            }
            printf("Max = %d, Min = %d\n", max, min);
        }
        else if(ch != 3) 
            printf("Invalid!\n");

    } while(ch != 3);
    
    return 0;
}
