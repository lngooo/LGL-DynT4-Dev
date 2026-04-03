long long Factorial(int n) {
    long long res = 1;
    if (n < 0) return 0;
    for (; n > 1; res *= n, n--);
    return res;
}