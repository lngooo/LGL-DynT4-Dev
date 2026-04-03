int BitCount(uint32_t n) {
    int c = 0;
    while(n) {
        c += (n & 1); c += ((n >> 1) & 1);
        c += ((n >> 2) & 1); c += ((n >> 3) & 1);
        c += ((n >> 4) & 1); c += ((n >> 5) & 1);
        c += ((n >> 6) & 1); c += ((n >> 7) & 1);
        n >>= 8;
    }
    return c;
}