void mx_sort_arr_int(int *arr, int size) {
    int min;
    int temp;

    for (int i = 0; i < size - 1; i++) {
        min = i;
        for (int j = i; j < size; j++)
            if (arr[j] < arr[min])
                min = j;
        if (i != min) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
