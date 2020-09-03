#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);

int main(void) {
    char s1[] = "12345678";
    
    // printf("%s\n", mx_strcpy(s1, s2));
    printf("%s\n", mx_strcpy(s1, "DIMA"));
    return 0;
}
