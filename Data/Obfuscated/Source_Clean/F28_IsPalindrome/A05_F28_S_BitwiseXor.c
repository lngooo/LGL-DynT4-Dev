int CM(char *Q) {
    int Xn = 0;
    while (Q[Xn]) Xn++;
    int cKa = 0, v3 = Xn - 1;
    while (cKa < v3) {
        if ((Q[cKa] ^ Q[v3]) != 0) return 0;
        cKa++; v3--;
    }
    return 1;
}