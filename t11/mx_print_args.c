#include <stdio.h>

void mx_printstr(const char *s);
void mx_printchar(char c);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    int min;
    char *temp;

    for (int i = 1; i < argc - 1; i++) {
        min = i;
        for (int j = i; j < argc; j++)
            if (mx_strcmp(argv[j], argv[min]) < 0)
                min = j;
        if (i != min) {
            temp = argv[i];
            argv[i] = argv[min];
            argv[min] = temp;
        }
    }
    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
    return 0;
}
