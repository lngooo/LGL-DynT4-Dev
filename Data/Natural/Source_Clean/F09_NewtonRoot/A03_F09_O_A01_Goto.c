int NewtonRoot(int n) {
    if (n < 0) return -1;
    if (n < 2) return n;
    long x = n, y;
init:
    y = (x + n / x) / 2;
loop:
    if (y >= x) goto end;
    x = y;
    y = (x + n / x) / 2;
    goto loop;
end:
    return (int)x;
}