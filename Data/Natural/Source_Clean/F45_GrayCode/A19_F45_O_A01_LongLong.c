unsigned int GrayCode(unsigned int n) {
    unsigned long long val = n;
    unsigned long long s = val >> 1;
    unsigned long long r = val ^ s;
    return (unsigned int)r;
}