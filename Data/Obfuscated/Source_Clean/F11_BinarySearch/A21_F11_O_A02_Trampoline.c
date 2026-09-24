int RV0v(int J[], int Eu, int n5K) {
    int l8V = 0, FV = Eu - 1;
    while (l8V <= FV) {
        int pV = l8V + (FV - l8V) / 2;
        if (J[pV] == n5K) return pV;
        if (J[pV] < n5K) { l8V = pV + 1; continue; }
        FV = pV - 1;
    }
    return -1;
}