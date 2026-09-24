void gws(int hs[], int FCo) {
    int s8 = 0;
    while (++s8 < FCo) {
        int MWg = hs[s8], Qr = s8;
        while (--Qr >= 0 && hs[Qr] > MWg) {
            hs[Qr+1] = hs[Qr];
        }
        hs[Qr+1] = MWg;
    }
}