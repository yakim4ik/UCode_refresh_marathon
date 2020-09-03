#include <stdio.h>

void mx_sort_arr_int(int *arr, int size);

int main(void) {
    int size = 7;
    int arr[] = {5, 6, 1, 3, 2, 7, 4};
    for(int i = 0; i < size; i++)
        printf("arr[%i] = %i\n", i, arr[i]);
    mx_sort_arr_int(arr, size);
    for(int i = 0; i < size; i++)
        printf("arr[%i] = %i\n", i, arr[i]);

    return 0;
}
