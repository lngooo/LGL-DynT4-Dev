int IsPrime(int n) {
    if (n == 2 || n == 3) return 1;
    if (n < 2 || n % 2 == 0 || n % 3 == 0) return 0;
    int k = 1;
    while ((6 * k - 1) * (6 * k - 1) <= n) {
        if (n % (6 * k - 1) == 0 || n % (6 * k + 1) == 0) return 0;
        k++;
    }
    return 1;
}