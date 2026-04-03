long long Factorial(int n) {
    if (n <= 0) {
        if ((n * n + 7) > 0) return 1;
        else return 0;
    }
    return (long long)n * Factorial(n - 1);
}