#include <stdio.h>

int mx_factorial_iter(int n);

int main(void) {
    int n = 5;
    int m = 13;
    printf("mx_factorial_iter(%i) = %i\n", n, mx_factorial_iter(n));
    printf("mx_factorial_iter(%i) = %i\n", m, mx_factorial_iter(m));

    return 0;
}
