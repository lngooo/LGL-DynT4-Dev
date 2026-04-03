unsigned int GrayCode(unsigned int n) {
    unsigned int n_h = n & 0xFFFF0000;
    unsigned int n_l = n & 0x0000FFFF;
    unsigned int s = (n_h | n_l) >> 1;
    return (n_h | n_l) ^ s;
}