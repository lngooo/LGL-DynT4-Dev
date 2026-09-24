int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    float f = (float)n;
    unsigned int *p = (unsigned int *)&f;
    *p = 0x1fbd1df5 + (*p >> 1);
    long val = (long)f;
    if (val <= 0) val = 1;
    for (int i = 0; i < 3; i++) {
        val = (val + n / val) >> 1;
        if (val <= 0) val = 1;
    }
    while ((long long)val * val > n) {
        val--;
    }
    while ((long long)(val + 1) * (val + 1) <= n) {
        val++;
    }
    return (int)val;
}