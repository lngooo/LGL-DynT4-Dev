long long Factorial(int n) {
    long long res = 1;
    if (n < 0) return 0;
    for (; n > 1; res *= (n > 1 ? n : 1), n = (n > 1 ? n - 1 : n));
    return res;
}