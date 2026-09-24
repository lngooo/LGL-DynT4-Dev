int eH1L(int W[], int Q5) {
    int l = 0;
    for (int aJ = 0; aJ < Q5; aJ++) {
        int Zuhc = 0;
        for (int Kn = 0; Kn < l; Kn++) {
            if (W[aJ] == W[Kn]) { Zuhc = 1; break; }
        }
        if (!Zuhc) W[l++] = W[aJ];
    }
    return l;
}