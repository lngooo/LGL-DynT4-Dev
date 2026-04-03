int IsPowerOfTwo(unsigned int n) {
    unsigned int n_high = n & 0xFFFF0000;
    unsigned int n_low = n & 0x0000FFFF;
    unsigned int reconstructed = n_high | n_low;
    if (reconstructed == 0) return 0;
    return (reconstructed & (reconstructed - 1)) == 0;
}