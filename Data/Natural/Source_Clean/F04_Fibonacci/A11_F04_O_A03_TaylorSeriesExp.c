long Fibonacci(int n) {
    double s5 = sqrt(5.0);
    double phi = (1.0 + s5) / 2.0;
    return (long)floor(exp(n * log(phi)) / s5 + 0.5);
}