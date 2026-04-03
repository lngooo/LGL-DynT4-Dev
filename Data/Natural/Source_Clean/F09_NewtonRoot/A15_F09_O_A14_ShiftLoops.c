int NewtonRoot(int n) {
    if (n < 0) return -1;
    long val = n;
    long r = 1;
    while (val > 0) { val >>= 2; r <<= 1; }
    for(int i=0; i<10; i++) {
        if (r == 0) r = 1;
        r = (r + n/r) >> 1;
    }
    return (int)r;
}