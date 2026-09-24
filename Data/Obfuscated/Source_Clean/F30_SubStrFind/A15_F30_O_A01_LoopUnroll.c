int opDN(char* l6, char* rg) {
    int p = strlen(l6), BL3 = strlen(rg);
    if (BL3 == 0) return 0;
    for (int Cnog = 0; Cnog <= p - BL3; Cnog++) {
        int A = 1;
        int CjV4 = 0;
        while (CjV4 < BL3 - 1) {
            if (l6[Cnog+CjV4] != rg[CjV4] || l6[Cnog+CjV4+1] != rg[CjV4+1]) { A = 0; break; }
            CjV4 += 2;
        }
        if (A && CjV4 == BL3 - 1) if (l6[Cnog+CjV4] != rg[CjV4]) A = 0;
        if (A) return Cnog;
    }
    return -1;
}