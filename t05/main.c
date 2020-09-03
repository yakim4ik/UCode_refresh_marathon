#include <stdio.h>

double mx_pow(double n, unsigned int pow);

int main(void) {
    printf("%f\n", mx_pow(3, 3));
    printf("%f\n", mx_pow(2.5, 3));
    printf("%.0f\n", mx_pow(2, 0));
    return 0;
}
