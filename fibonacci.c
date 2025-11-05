#include <stdio.h>

int fib_recursive(int n) {
    if (n <= 1)
        return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

int fib_iterative(int n) {
    int a = 0, b = 1, c, i;
    if (n <= 1)
        return n;
    for (i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int i, n;

    printf("Enter how many fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("\nfibonacci using reccursion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib_recursive(i));
    }

    printf("\n\nfibonacci using iteration:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fib_iterative(i));
    }

    printf("\n");
    return 0;
}
