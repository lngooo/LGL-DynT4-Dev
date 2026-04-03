int Sum(int n) {
    if (n < 0) return 0;
    long long res = (long long)n * (n + 1);
    return (int)(res >> 1);
}