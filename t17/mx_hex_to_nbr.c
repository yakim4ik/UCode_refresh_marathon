unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long result = 0;
    int count;
    int mult = 1;

    for(count = 0; hex[count] != '\0';count++);
    for(int i = count - 1; i >= 0; i--){
        if ((hex[i]>='0') && (hex[i]<='9'))
            result += (hex[i] - 48)*mult;
        else {
            if (hex[i] >= 'a' && hex[i] <= 'f')
                result += (hex[i] - 87) * mult;
            else if (hex[i] >= 'A' && hex[i] <= 'F')
                result += (hex[i] - 55) * mult;
            else 
                return 0;
        }
        mult *= 16;
    }
    return result;
}
