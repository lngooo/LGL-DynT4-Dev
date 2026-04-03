int add_recursive(int a, int b) {
    if (b == 0) return a;
    return add_recursive(a ^ b, (a & b) << 1);
}

int Sum(int n) {
    if (n <= 0) return 0;
    return add_recursive(n, Sum(n - 1));
}