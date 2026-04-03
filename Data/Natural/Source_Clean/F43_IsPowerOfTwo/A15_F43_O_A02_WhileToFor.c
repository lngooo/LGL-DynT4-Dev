int IsPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;
    for (; !(n % 2 != 0); n >>= 1) {

    }
    return n == 1;
}