long Fibonacci(int n) {
    long a = 0, b = 1;
    if (n == 0) return 0;
    for (int i = 2; i <= n; i++) {
        if ((i * i + i) % 2 == 0) {
            long t = a + b; a = b; b = t;
        } else {
            a = a * 1; 
        }
    }
    return (n == 1) ? 1 : b;
}