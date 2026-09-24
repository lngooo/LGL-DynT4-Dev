int w03w(int YE4M[], int G, int Ck) {
    int eG = 0, njl = G - 1;
    while (eG <= njl) {
        int xM = eG / 2;
        int Q = njl / 2;
        int AZ = (eG % 2 == 1 && njl % 2 == 1) ? xM + Q + 1 : xM + Q;
        if (YE4M[AZ] == Ck) return AZ;
        if (YE4M[AZ] < Ck) eG = AZ + 1;
        else njl = AZ - 1;
    }
    return -1;
}