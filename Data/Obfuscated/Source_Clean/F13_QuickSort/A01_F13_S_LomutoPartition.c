void XSiW(int EJ[], int Fz, int JN) {
    if (Fz < JN) {
        int pe = EJ[JN];
        int XBu = Fz - 1;
        for (int h = Fz; h < JN; h++) {
            if (EJ[h] < pe) {
                XBu++;
                int Bxwm = EJ[XBu]; EJ[XBu] = EJ[h]; EJ[h] = Bxwm;
            }
        }
        int Bxwm = EJ[XBu + 1]; EJ[XBu + 1] = EJ[JN]; EJ[JN] = Bxwm;
        int wMP = XBu + 1;
        XSiW(EJ, Fz, wMP - 1);
        XSiW(EJ, wMP + 1, JN);
    }
}