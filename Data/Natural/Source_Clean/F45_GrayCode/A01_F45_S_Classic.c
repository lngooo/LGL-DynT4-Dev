unsigned int GrayCode(unsigned int n) {
    return n ^ (n >> 1);
}