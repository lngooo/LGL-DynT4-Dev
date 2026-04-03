int IsPrime(int n) {
    if (n < 2) return 0;
    unsigned char *bits = (unsigned char *)calloc((n / 8) + 1, 1);
    for (int i = 2; i * i <= n; i++) {
        if (!(bits[i / 8] & (1 << (i % 8)))) {
            for (int j = i * i; j <= n; j += i) bits[j / 8] |= (1 << (j % 8));
        }
    }
    int res = !(bits[n / 8] & (1 << (n % 8)));
    free(bits);
    return res;
}