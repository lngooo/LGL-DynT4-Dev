void W(int Kif0[], int gDtR, int Eo8o) {
    if (gDtR >= Eo8o) return;
    int Nq = Kif0[gDtR], zlS = gDtR - 1, Y34 = Eo8o + 1;
    while (1) {
        while (1) { zlS++; if (Kif0[zlS] >= Nq) break; }
        while (1) { Y34--; if (Kif0[Y34] <= Nq) break; }
        if (zlS >= Y34) break;
        int DFb = Kif0[zlS]; Kif0[zlS] = Kif0[Y34]; Kif0[Y34] = DFb;
    }
    W(Kif0, gDtR, Y34);
    W(Kif0, Y34 + 1, Eo8o);
}