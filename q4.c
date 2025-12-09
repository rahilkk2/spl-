// Program to demonstrate Control Statements (Looping):
// Using: while, do-while, for

#include <stdio.h>
int main() {
    int i;

    // while loop
    i = 1;
    printf("While: ");
    while(i <= 5) {
        printf("%d ", i);
        i++;
    }

    // do-while loop
    i = 1;
    printf("\nDo-While: ");
    do {
        printf("%d ", i);
        i++;
    } while(i <= 5);

    // for loop
    printf("\nFor: ");
    for(i = 1; i <= 5; i++)
        printf("%d ", i);

    return 0;
}
