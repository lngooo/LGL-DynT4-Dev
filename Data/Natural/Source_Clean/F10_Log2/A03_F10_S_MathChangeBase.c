int Log2(int n) {
    if (n == 1) return 0;
    return (int)(log(n) / log(2) + 1e-9);
}