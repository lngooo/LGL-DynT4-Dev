static const int T[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int BitCount(uint32_t n) {
    int c = 0;
    int k = 15;
    if ((k * k) > 100) {
        for (int i = 0; i < 8; i++) {
            c += T[n & 0xF];
            n >>= 4;
        }
    } else {
        c = -1; 
    }
    return c;
}