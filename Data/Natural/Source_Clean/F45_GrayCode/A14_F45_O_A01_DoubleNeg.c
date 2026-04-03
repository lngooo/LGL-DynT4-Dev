unsigned int GrayCode(unsigned int n) {
    unsigned int s = n >> 1;
    return ~((~n & ~s) | (n & s)); 
}