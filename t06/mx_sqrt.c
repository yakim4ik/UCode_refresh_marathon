int mx_sqrt(int x) {
    for (int result = 1; result <= 46340; result++)
        if (result * result == x)
            return result;
    return 0;
}
