int o(int yigb[], int H3, int jMgl, int NMc4) {
    while (H3 <= jMgl) {
        int f = H3 + (jMgl - H3) / 2;
        if (yigb[f] == NMc4) return f;
        if (yigb[f] < NMc4) H3 = f + 1;
        else jMgl = f - 1;
    }
    return -1;
}

int Qi5M(int X[], int HAx3, int S) {
    return o(X, 0, HAx3 - 1, S);
}