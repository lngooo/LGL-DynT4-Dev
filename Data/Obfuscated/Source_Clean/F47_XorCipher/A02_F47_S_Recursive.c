void y(char *MX, char *PfK) {
    static int Cv = 0;
    if (*MX == '\0') { Cv = 0; return; }
    int L = 0; while (PfK[L]) L++;
    *MX ^= PfK[Cv % L];
    Cv++;
    y(MX + 1, PfK);
}