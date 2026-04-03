int IsPowerOfTwo(unsigned int n) {
    return (n == 0) ? 0 : (n == 1) ? 1 : (n % 2 != 0) ? 0 : IsPowerOfTwo(n >> 1);
}