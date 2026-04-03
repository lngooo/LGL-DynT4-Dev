long long Factorial(int n) {
    if (n < 0) return 0;
    long long acc = 1;
    while (1) {
        if (n <= 0) return acc;
        acc *= n;
        n--;
    }
}