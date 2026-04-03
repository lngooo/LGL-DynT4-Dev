int Abs(int n) {
    void *tbl[] = {&&pos, &&neg};
    goto *tbl[n < 0];
neg:
    return -n;
pos:
    return n;
}