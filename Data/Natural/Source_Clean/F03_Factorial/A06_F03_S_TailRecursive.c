long long fact_helper(int n, long long acc) {
    if (n <= 0) return acc;
    return fact_helper(n - 1, acc * n);
}

long long Factorial(int n) {
    if (n < 0) return 0;
    return fact_helper(n, 1);
}