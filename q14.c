/*
write a C program to demonstrate the concept of recursion by implementing recursive
functions for calculating the factorial of a number and finding the Greatest Common
Divisor (GCD) of two numbers.
*/
#include <stdio.h>

// Factorial Function
long long fact(int n) {
    return (n == 0) ? 1 : n * fact(n - 1);
}

// GCD Function (Euclidean)
int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int f_num, g_n1, g_n2;
    printf("Fact Number: ");
    scanf("%d", &f_num);
    printf("Factorial: %lld\n", fact(f_num));

    printf("GCD Numbers (a b): ");
    scanf("%d %d", &g_n1, &g_n2);
    printf("GCD: %d\n", gcd(g_n1, g_n2));

    return 0;
}