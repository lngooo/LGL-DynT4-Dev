int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    float x = (float)n;
    unsigned int i = *(unsigned int *)&x;
    i = 0x1fbd1df5 + (i >> 1); 
    x = *(float *)&i;

    long x0 = (long)x;
    if (x0 == 0) x0 = 1;
    x0 = (x0 + n / x0) / 2;
    x0 = (x0 + n / x0) / 2;
    if ((x0 + 1) * (x0 + 1) <= n) x0++;
    return (int)x0;
}