char *mx_strnew(const int size);

int main(void) {
    char *str = mx_strnew(10);
    for(int i = 0; i < 10; i++)
        str[i] = 'a' + i;
    return 0;
}
