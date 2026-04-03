long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    double logSum = 0;
    for (int i = 1; i <= n; i++) logSum += log((double)i);
    return (long long)floor(exp(logSum) + 0.5);
}