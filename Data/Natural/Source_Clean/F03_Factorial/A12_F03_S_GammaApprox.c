long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    double res = 1.0;
    for(int i = 1; i <= n; i++) res *= i;
    return (long long)floor(res + 0.5);
}