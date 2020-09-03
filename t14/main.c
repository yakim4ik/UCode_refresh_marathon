#include <stdio.h>

int mx_binary_search(char **arr, int size, const char *s, int *count);

int main(void) {
    char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
    int count = 0;
    printf("Index = %i\n", mx_binary_search(arr, 6, "ab", &count));
    printf("count = %i\n", count);

    count = 0;
    printf("Index = %i\n", mx_binary_search(arr, 6, "aBc", &count));
    printf("count = %i\n", count);

    count = 0;
    printf("Index = %i\n", mx_binary_search(arr, 6, "aBz", &count));
    printf("count = %i\n", count);

    return 0;
}
