unsigned int GrayCode(unsigned int n) {
    unsigned int s = n / 2;
    unsigned int res = n ^ s;
    return res;
}