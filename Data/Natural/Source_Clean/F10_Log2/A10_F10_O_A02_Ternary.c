int Log2(int n) {
    return (n <= 1) ? 0 : 1 + Log2(n >> 1);
}