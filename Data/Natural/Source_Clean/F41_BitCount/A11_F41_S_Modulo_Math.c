int BitCount(uint32_t n) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (n % 2 != 0) count++;
        n /= 2;
    }
    return count;
}