int Sqrt(int n) {
    if (n < 0) return -1;
    long i = 0;
    while ((i + 1) * (i + 1) <= n) {
        i++;
    }
    return (int)i;
}