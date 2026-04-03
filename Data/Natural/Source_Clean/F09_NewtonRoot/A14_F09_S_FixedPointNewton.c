int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    long x = (long)n << 16;
    long res = 1 << 16;
    for (int i = 0; i < 20; i++) {
        res = (res + (x / res)) >> 1;
    }
    return (int)(res >> 8); 
}