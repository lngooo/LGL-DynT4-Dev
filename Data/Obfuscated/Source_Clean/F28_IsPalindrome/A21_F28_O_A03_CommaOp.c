int kz(char *MAG) {
    int nBq = 0; while (MAG[nBq]) nBq++;
    for (int VpH = 0, P = nBq - 1; VpH < P; VpH++, P--) {
        if (VpH++, VpH--, MAG[VpH] != MAG[P]) return 0;
    }
    return 1;
}