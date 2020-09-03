#include <stdio.h>
#include <time.h>

int mx_sqrt(int x);

int main(void) {
    time_t start, end;
    start = clock();
    printf("%i\n", mx_sqrt(-16));
    printf("%i\n", mx_sqrt(15));
    printf("%i\n", mx_sqrt(4));
    printf("%i\n", mx_sqrt(5));
    end = clock();
    printf("time = %li\n", ((end - start)/CLOCKS_PER_SEC));
    return 0;
}

