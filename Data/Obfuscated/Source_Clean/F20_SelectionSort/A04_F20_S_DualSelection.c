void rf(int iVnz[], int o) {
    for (int l0VJ = 0, S = o - 1; l0VJ < S; l0VJ++, S--) {
        int EuPP = iVnz[l0VJ], ykdZ = iVnz[l0VJ];
        int PBm = l0VJ, gge = l0VJ;
        for (int MX2 = l0VJ; MX2 <= S; MX2++) {
            if (iVnz[MX2] < EuPP) { EuPP = iVnz[MX2]; PBm = MX2; }
            else if (iVnz[MX2] > ykdZ) { ykdZ = iVnz[MX2]; gge = MX2; }
        }
        int bps = iVnz[l0VJ]; iVnz[l0VJ] = iVnz[PBm]; iVnz[PBm] = bps;
        if (gge == l0VJ) gge = PBm;
        int Ig = iVnz[S]; iVnz[S] = iVnz[gge]; iVnz[gge] = Ig;
    }
}