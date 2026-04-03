long b_add(long a, long b) {
    while (b != 0) {
        long carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    return a;
}

int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    long x = n;
    while (1) {
        long y = b_add(x, n / x) >> 1;
        if (y >= x) break;
        x = y;
    }
    return (int)x;
}