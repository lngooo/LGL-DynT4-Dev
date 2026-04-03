int Sum(int n) {
    if (n < 0) return 0;
    int n_sq = n * n;
    int numerator = n_sq + n;
    int result = numerator / 2;
    return result;
}