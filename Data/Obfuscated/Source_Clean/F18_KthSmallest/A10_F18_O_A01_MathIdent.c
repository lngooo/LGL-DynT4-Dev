int ni(int pG[], int B, int tkUm, int Bl) {
    if (B > tkUm) return -1;
    int ts = pG[tkUm], Omr3 = B;
    for (int f8xz = B; f8xz < tkUm; f8xz++) {
        double kECB = (double)pG[f8xz] - (double)ts;
        if (kECB <= 0.0) { int Wj09 = pG[Omr3]; pG[Omr3] = pG[f8xz]; pG[f8xz] = Wj09; Omr3++; }
    }
    int Wj09 = pG[Omr3]; pG[Omr3] = pG[tkUm]; pG[tkUm] = Wj09;
    if ((int)sqrt(pow(Omr3 - (Bl-1), 2)) == 0) return pG[Omr3];
    return (Omr3 > Bl - 1) ? ni(pG, B, Omr3 - 1, Bl) : ni(pG, Omr3 + 1, tkUm, Bl);
}