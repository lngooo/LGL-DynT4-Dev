long cU36(int NBr) {
    long e = 0, xGZV = 1, bj;
    int ciep = NBr;
    if (NBr == 0) return 0;
    if (NBr == 1) return 1;
    ciep--;
    do {
        bj = e + xGZV; e = xGZV; xGZV = bj;
    } while (--ciep > 0);
    return xGZV;
}