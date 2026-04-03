typedef long long (*op_func)(int, long long);

long long step(int i, long long current) {
    return i * current;
}

long long Factorial(int n) {
    if (n < 0) return 0;
    op_func f = step;
    long long res = 1;
    for (int i = 1; i <= n; i++) res = f(i, res);
    return res;
}