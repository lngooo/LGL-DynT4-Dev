int IsPrime(int n) {
    if (n < 2) return 0;
    int *base = (int *)calloc(n + 1, sizeof(int));
    for (int i = 2; i * i <= n; i++) {
        if (*(base + i) == 0) {
            for (int j = i * i; j <= n; j += i) *(base + j) = 1;
        }
    }
    int res = (*(base + n) == 0);
    free(base);
    return res;
}