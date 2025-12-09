#include <stdio.h>
int main() {
    int n,i;

    printf("Enter a number: ");
    scanf("%d",&n);
    if(n > 0) printf("Positive\n");
    else if(n < 0) printf("Negative\n");
    else printf("Zero\n");

    switch(n % 2) {
        case 0: printf("Even\n"); break;
        case 1: printf("Odd\n");  break;
    }

    printf("Counting 1 to 5:\n");
    for(i=1;i<=5;i++) printf("%d ", i);

    return 0;
}
