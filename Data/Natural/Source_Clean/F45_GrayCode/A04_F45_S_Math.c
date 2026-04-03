unsigned int GrayCode(unsigned int n) {
    unsigned int shift = n >> 1;
    return (n | shift) - (n & shift);
}