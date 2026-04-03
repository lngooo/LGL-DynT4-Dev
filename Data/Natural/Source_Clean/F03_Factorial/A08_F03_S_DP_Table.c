long long Factorial(int n) {
    if (n < 0) return 0;
    if (n == 0) return 1;
    long long *table = (long long *)malloc((n + 1) * sizeof(long long));
    table[0] = 1;
    for (int i = 1; i <= n; i++) {
        table[i] = table[i - 1] * i;
    }
    long long result = table[n];
    free(table);
    return result;
}