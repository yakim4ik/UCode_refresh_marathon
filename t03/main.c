#include <stdio.h>

int mx_strlen(const char *s);
void mx_printstr(const char *s);

int main(void) {
    char *str = NULL;
    printf("%s = %i\n", str, mx_strlen(str));
    mx_printstr(str);
    return 0;
}
