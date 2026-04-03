int IsPowerOfTwo(unsigned int n) {
    unsigned long long val = n;
    if (val == 0) return 0;
    unsigned long long temp = val - 1;
    return (val & temp) == 0;
}