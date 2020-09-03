#include <stdio.h>

int mx_bubble_sort(char **arr, int size);

int main(void) {
    char *arr[] = {"abc", "zyz", "ghi", "def"};
    int res;
    
    for (int i = 0; i < 4; i++)
        printf("arr[%i]= %s\n", i, arr[i]);

    res = mx_bubble_sort(arr, 4);

    for (int i = 0; i < 4; i++)
        printf("arr[%i]= %s\n", i, arr[i]);
    printf("rotation = %i\n", res);
    return 0;
}
