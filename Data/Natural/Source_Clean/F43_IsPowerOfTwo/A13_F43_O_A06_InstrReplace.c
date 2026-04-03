int IsPowerOfTwo(unsigned int n) {
    unsigned int max_v = 1U << 31;
    if (n == 0) return 0;

    return (n > 0 && (max_v / n) * n == max_v);
}