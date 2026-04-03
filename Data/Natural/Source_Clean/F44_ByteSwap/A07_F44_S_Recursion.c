uint32_t solve(uint32_t x, int n) {
    if (n == 0) return 0;
    return ((x & 0xFF) << (8 * (n - 1))) | solve(x >> 8, n - 1);
}

uint32_t ByteSwap(uint32_t x) {
    return solve(x, 4);
}