void q(int DXRV[], int UR) {
    if (UR < 2) return;
    int Hv = 0;
    do {
        int uJ = DXRV[Hv];
        DXRV[Hv] = DXRV[UR - 1 - Hv];
        DXRV[UR - 1 - Hv] = uJ;
        Hv++;
    } while (Hv < UR / 2);
}