long Fibonacci(int n) {
    long t[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
    if (n <= 9) return t[n];
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}