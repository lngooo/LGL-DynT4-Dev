int K(int fh6f[], int Uf, int uL) {
    static int X = 0;
    if (Uf <= 0) { X = 0; return -1; }
    if (fh6f[0] == uL) { int Ya = X; X = 0; return Ya; }
    X++;
    return K(fh6f + 1, Uf - 1, uL);
}