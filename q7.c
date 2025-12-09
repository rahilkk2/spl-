/*
Write a C program that performs different operations on an integer array using a menu-driven approach.
Requirements:
1. Calculate sum & average of the array elements
2. Search for a given element (Linear Search)
*/

#include <stdio.h>

int main() {
    int a[50], n, i, ch, key;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    do {
        printf("\nMenu:\n1.Sum & Avg\n2.Search\n3.Exit\nEnter: ");
        scanf("%d", &ch);

        if(ch == 1) {
            int sum = 0;
            for(i = 0; i < n; i++) sum += a[i];
            printf("Sum = %d, Avg = %.2f\n", sum, (float)sum/n);
        }
        else if(ch == 2) {
            printf("Enter element to search: ");
            scanf("%d", &key);
            for(i = 0; i < n; i++)
                if(a[i] == key) break;
            if(i < n) printf("Found at position %d\n", i+1);
            else printf("Not Found!\n");
        }
        else if(ch != 3)
            printf("Invalid choice!\n");

    } while(ch != 3);

    return 0;
}
