#include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex);

int main () {
    char str[] = "Fvf";
    for(int i = 0; str[i] != '\0'; i++)
        printf("%c", str[i]);

    unsigned long value = mx_hex_to_nbr(str);
    printf("\n%lu\t", value);
    return 0;
}
