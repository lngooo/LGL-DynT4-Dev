int BitCount(uint32_t n) {
    unsigned long long wide = n;
    int count = 0;
    while (wide > 0) {
        if ((wide % 2ULL) == 1ULL) count++;
        wide = wide >> 1;
    }
    return count;
}