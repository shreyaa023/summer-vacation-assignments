/*Write a program to Recursive Fibonacci*/
#include <stdio.h>

// Recursive function to find Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
