unsigned int xor_proxy(unsigned int x, unsigned int y) {
    return x ^ y;
}

unsigned int GrayCode(unsigned int n) {
    return xor_proxy(n, n >> 1);
}