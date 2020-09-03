
#include <stdio.h>


char *mx_strdup(const char *str);

int main () {
    char str1[] = "aabbccdd";
    char *temp = mx_strdup(str1);
    //for(int i = 0; (temp[i] != '\0'); i++)
        printf("temp = %s\n", temp);  
    return 0;
}
