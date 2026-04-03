long Fibonacci(int n) {
    static long cache[101] = {0};
    if (n <= 1) return (long)n;
    if (cache[n] != 0) return cache[n];
    return cache[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
}