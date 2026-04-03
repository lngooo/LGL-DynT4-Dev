int Log2(int n) {
    int high = 0, low = 0;
    if (n >= 65536) { n >>= 16; high = 16; }
    if (n >= 256) { n >>= 8; low = 8; }
    int mid = 0;
    if (n >= 16) { n >>= 4; mid = 4; }
    int rest = 0;
    while(n >>= 1) rest++;
    return high + low + mid + rest;
}