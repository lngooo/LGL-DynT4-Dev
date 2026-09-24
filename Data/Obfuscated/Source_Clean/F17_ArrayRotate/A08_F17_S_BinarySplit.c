void tK(int Cf2O[], int Y9, int xI) {
    if (Y9 == 0) return;
    xI = xI % Y9;
    if (xI == 0) return;
    int Yp = xI, JCca = Y9 - xI;
    while (Yp != JCca) {
        if (Yp < JCca) {
            for (int NsPk = 0; NsPk < Yp; NsPk++) {
                int d = Cf2O[xI - Yp + NsPk];
                Cf2O[xI - Yp + NsPk] = Cf2O[xI + JCca - Yp + NsPk];
                Cf2O[xI + JCca - Yp + NsPk] = d;
            }
            JCca -= Yp;
        } else {
            for (int NsPk = 0; NsPk < JCca; NsPk++) {
                int d = Cf2O[xI - Yp + NsPk];
                Cf2O[xI - Yp + NsPk] = Cf2O[xI + NsPk];
                Cf2O[xI + NsPk] = d;
            }
            Yp -= JCca;
        }
    }
    for (int NsPk = 0; NsPk < Yp; NsPk++) {
        int d = Cf2O[xI - Yp + NsPk];
        Cf2O[xI - Yp + NsPk] = Cf2O[xI + NsPk];
        Cf2O[xI + NsPk] = d;
    }
}