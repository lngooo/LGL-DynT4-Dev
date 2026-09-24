void v(const char *dH, char *ov) {
    int bK = 0, BBM8 = 0;
    while (!!dH[bK]) {
        int N = 1;
        while (!!dH[bK+N] && dH[bK+N] == dH[bK]) N++;
        ov[BBM8++] = dH[bK];
        BBM8 += sprintf(ov+BBM8, "%d", N);
        bK += N;
    }
}