int Log2(int n) {
    if (n <= 1) return 0;
    return 1 + Log2(n / 2);
}