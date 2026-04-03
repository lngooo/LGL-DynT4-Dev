int IsPowerOfTwo(unsigned int n) {
    unsigned int max_pow = 2147483648U;
    return (n > 0 && max_pow % n == 0);
}