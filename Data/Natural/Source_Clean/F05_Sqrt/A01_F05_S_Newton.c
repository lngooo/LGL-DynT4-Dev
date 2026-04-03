int Sqrt(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = n;
    long y = (x + 1) / 2;
    while (y < x) {
        x = y;
        y = (x + n / x) / 2;
    }
    return (int)x;
}