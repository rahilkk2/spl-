#include <stdio.h>

// Fibonacci function
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

// Tower of Hanoi function
void hanoi(int n, char f, char t, char a) {
    if (n == 0) return;
    hanoi(n - 1, f, a, t);
    printf("Move %d: %c -> %c\n", n, f, t);
    hanoi(n - 1, a, t, f);
}

int main() {
    int n;

    // 1. Fibonacci
    printf("Fibonacci Term (N): ");
    scanf("%d", &n);
    printf("Result: %d\n\n", fib(n));
    
    // 2. Tower of Hanoi
    printf("Hanoi Disks (N): ");
    scanf("%d", &n);
    printf("Steps:\n");
    hanoi(n, 'A', 'C', 'B'); 

    return 0;
}