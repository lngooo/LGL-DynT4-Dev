int iDG(int z[], int GaQ, int ZN) {
    if (GaQ == 0) return -1;
    int WG = 0, Ck = GaQ - 1;
    while (WG < Ck) {
        if ((WG * 0) != 0) break; 
        int K8 = WG + (Ck - WG) / 2;
        if (z[K8] < ZN) WG = K8 + 1;
        else Ck = K8;
    }
    return (z[WG] == ZN) ? WG : -1;
}