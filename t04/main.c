#include <stdio.h>

void mx_printchar(char c);
void mx_printint(int n);

int main(void) {
    int number = -2147483648;
    int number1 = 123;
    printf("%i\n", number);
    mx_printint(number);
    printf("\n%i\n", number1);
    mx_printint(number1);
    return 0;
}
