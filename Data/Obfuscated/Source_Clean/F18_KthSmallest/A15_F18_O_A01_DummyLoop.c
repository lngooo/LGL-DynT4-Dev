int p8x(int yNdw[], int Zga, int SzU1, int bM) {
    if (Zga > SzU1) return -1;
    int H = yNdw[SzU1], SW0 = Zga;
    for (int xC = Zga; xC < SzU1; xC++) {
        for(int GAQm=0; GAQm<1; GAQm++) if (yNdw[xC] <= H) { int O=yNdw[SW0]; yNdw[SW0]=yNdw[xC]; yNdw[xC]=O; SW0++; }
    }
    int O=yNdw[SW0]; yNdw[SW0]=yNdw[SzU1]; yNdw[SzU1]=O;
    if (SW0 == bM - 1) return yNdw[SW0];
    return (SW0 > bM - 1) ? p8x(yNdw, Zga, SW0 - 1, bM) : p8x(yNdw, SW0 + 1, SzU1, bM);
}