int g(int Seyi[], int k, int C3) {
    if (k <= 0) return -1;
    int c = Seyi[k-1], FkOZ = -1;
    Seyi[k-1] = C3;
    while (Seyi[++FkOZ] != C3);
    Seyi[k-1] = c;
    if (FkOZ == k - 1) return (c == C3) ? FkOZ : -1;
    return FkOZ;
}