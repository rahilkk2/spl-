#include <stdio.h>
int main() {
    int n, f = 1;
    printf("Enter a number to find factorial: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) f *= i;
    printf("Factorial = %d", f);
}
