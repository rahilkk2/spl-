/* 
5) Write a C program demonstrating advanced usage of nested control structures
   with switch, continue, break, and goto statements to perform multiple 
   menu-driven operations.
*/

#include <stdio.h>

int main() {
    int choice, n, i;
start:
    printf("\nMenu:\n1. Count 1-5\n2. Check Even/Odd\n3. Exit\nEnter: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            for(i=1;i<=5;i++) {
                if(i==3) continue; // skip 3
                printf("%d ", i);
            }
            break;

        case 2:
            printf("Enter number: ");
            scanf("%d",&n);
            if(n%2==0) printf("Even\n");
            else printf("Odd\n");
            break;

        case 3:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid! Try again.\n");
            break;
    }

    goto start; // back to menu
}
