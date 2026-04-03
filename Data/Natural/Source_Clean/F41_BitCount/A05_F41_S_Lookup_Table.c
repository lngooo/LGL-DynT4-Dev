static const int LOOKUP[16] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4};

int BitCount(uint32_t n) {
    int count = 0;
    for (int i = 0; i < 8; i++) {
        count += LOOKUP[n & 0xF];
        n >>= 4;
    }
    return count;
}