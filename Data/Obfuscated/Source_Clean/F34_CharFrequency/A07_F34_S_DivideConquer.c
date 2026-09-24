int QiMi(char* bJZ, int V, int UO0E, char dkKS) {
    if (V > UO0E) return 0;
    if (V == UO0E) return (bJZ[V] == dkKS);
    int X = V + (UO0E - V) / 2;
    return QiMi(bJZ, V, X, dkKS) + QiMi(bJZ, X + 1, UO0E, dkKS);
}

int bz7(char* bJZ, char dkKS) {
    int emm = strlen(bJZ);
    if (emm == 0) return 0;
    return QiMi(bJZ, 0, emm - 1, dkKS);
}