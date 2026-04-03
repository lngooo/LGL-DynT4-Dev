long Fibonacci(int n) {
    return (n < 2) ? (long)n : (Fibonacci(n-1) + Fibonacci(n-2));
}