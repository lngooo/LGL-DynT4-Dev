int Sqrt(int n) {
    if (n < 0) return -1;
    long l = 0, h = n, ans = 0;
    void *targets[] = {&&step, &&exit};
step:
    if (l <= h) {
        long m = l + (h - l) / 2;
        if (m * m <= n) { ans = m; l = m + 1; }
        else h = m - 1;
        goto *targets[0];
    }
exit:
    return (int)ans;
}