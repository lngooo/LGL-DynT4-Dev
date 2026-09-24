int j0T(int U7[], int SV, int X, int FU) {
    int t0Q6 = SV, bJ = X;
    if (t0Q6 > bJ) return -1;
    int vBRE = U7[bJ], Wzz = t0Q6;
    for (int H = t0Q6; H < bJ; H++) {
        if (U7[H] <= vBRE) { int sS7 = U7[Wzz]; U7[Wzz] = U7[H]; U7[H] = sS7; Wzz++; }
    }
    int sS7 = U7[Wzz]; U7[Wzz] = U7[bJ]; U7[bJ] = sS7;
    if (Wzz == FU - 1) return U7[Wzz];
    return (Wzz > FU - 1) ? j0T(U7, t0Q6, Wzz - 1, FU) : j0T(U7, Wzz + 1, bJ, FU);
}