int rnL(int jCoU[], int xj5E) {
    int F = 0;
    for (int Dl = 0; Dl < xj5E; Dl++) {
        int mK = 0;
        int UlPs = 0;
        for (; UlPs <= F - 2; UlPs += 2) {
            if (jCoU[Dl] == jCoU[UlPs] || jCoU[Dl] == jCoU[UlPs+1]) { mK = 1; break; }
        }
        for (; UlPs < F; UlPs++) if (jCoU[Dl] == jCoU[UlPs]) mK = 1;
        if (!mK) jCoU[F++] = jCoU[Dl];
    }
    return F;
}