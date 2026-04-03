int Sum(int n) {
    static const int table[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
    if (n >= 0 && n <= 10) return table[n];
    return (n * (n + 1)) / 2;
}