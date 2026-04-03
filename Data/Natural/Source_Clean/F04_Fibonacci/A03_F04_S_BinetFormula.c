long Fibonacci(int n) {
    double sqrt5 = sqrt(5.0);
    double phi = (1.0 + sqrt5) / 2.0;
    return (long)round(pow(phi, n) / sqrt5);
}