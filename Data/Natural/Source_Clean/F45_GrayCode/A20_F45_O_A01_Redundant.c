unsigned int GrayCode(unsigned int n) {
    unsigned int a = n;
    unsigned int b = n >> 1;
    unsigned int junk = (a & 0) | (b & 0);
    unsigned int res = (a ^ b) | junk;
    return res & 0xFFFFFFFF;
}