/*
write a C program to demonstrate the concept of recursion by implementing recursive
functions for generating the Fibonacci series and computing the power of a number (xⁿ).
*/
#include <stdio.h>

// Fibonacci Function
int f(int n) {
    return (n <= 1) ? n : f(n - 1) + f(n - 2);
}

// Power Function
long long p(int b, int e) {
    return (e == 0) ? 1 : b * p(b, e - 1);
}

int main() {
    int fc, pb, pe;

    printf("Fibonacci terms (N): ");
    scanf("%d", &fc);
    printf("Series: ");
    for (int i = 0; i < fc; i++) {
        printf("%d ", f(i));
    }

    printf("\nBase and Exponent (x n): ");
    scanf("%d %d", &pb, &pe);
    printf("Result: %lld\n", p(pb, pe));

    return 0;
}