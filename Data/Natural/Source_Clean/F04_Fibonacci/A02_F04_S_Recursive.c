long Fibonacci(int n) {
    if (n <= 1) return (long)n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}