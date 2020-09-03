#include <stdio.h>
#include <string.h>

int mx_strcmp(const char *s1, const char *s2);

int main(void) {
    char *s1 = "Dima is the best!";
    char *s2 = "Dima is the";
    printf("mx_strcmp(%s, %s) = %i", s1, s2, mx_strcmp(s1, s2));
    printf("\nmx_strcmp(%s, %s) = %i", s1, s2, strcmp(s1, s2));
    return 0;
}
