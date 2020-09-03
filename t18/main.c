#include <unistd.h>

void mx_foreach(int *arr, int size, void (*f)(int));

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printint(int n) {

    if (n == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }
    if (n > 9)
        mx_printint(n / 10);
    mx_printchar(n % 10 + 48);
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 5};
    mx_foreach(arr, 5, mx_printint);
    return 0;
}
