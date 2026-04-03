int NewtonRoot(int n) {
    if (n < 0) return -1;
    long a = n, b = n;
    long res = (a + 1) / 2;
    while (res < b) {
        b = res;
        long tmp = n / b;
        res = (b + tmp) / 2;
    }
    return (int)b;
}