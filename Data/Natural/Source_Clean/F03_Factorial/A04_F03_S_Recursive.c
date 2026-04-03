long long Factorial(int n) {
    if (n <= 0) return 1;
    return (long long)n * Factorial(n - 1);
}