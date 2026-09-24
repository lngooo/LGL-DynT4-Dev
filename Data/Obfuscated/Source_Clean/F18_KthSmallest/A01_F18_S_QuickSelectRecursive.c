int aXt(int wYz[], int LWPa, int PGW8, int zo) {
    if (zo > 0 && zo <= PGW8 - LWPa + 1) {
        int UV = wYz[PGW8], Eo = LWPa;
        for (int U0Dv = LWPa; U0Dv < PGW8; U0Dv++) {
            if (wYz[U0Dv] <= UV) {
                int u = wYz[Eo]; wYz[Eo] = wYz[U0Dv]; wYz[U0Dv] = u;
                Eo++;
            }
        }
        int u = wYz[Eo]; wYz[Eo] = wYz[PGW8]; wYz[PGW8] = u;
        int BX = Eo;
        if (BX - LWPa == zo - 1) return wYz[BX];
        if (BX - LWPa > zo - 1) return aXt(wYz, LWPa, BX - 1, zo);
        return aXt(wYz, BX + 1, PGW8, zo - BX + LWPa - 1);
    }
    return -1;
}