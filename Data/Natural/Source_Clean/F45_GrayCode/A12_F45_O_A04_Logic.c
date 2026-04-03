unsigned int GrayCode(unsigned int n) {
    unsigned int a = n;
    unsigned int b = n >> 1;

    return (a | b) & ~(a & b);
}