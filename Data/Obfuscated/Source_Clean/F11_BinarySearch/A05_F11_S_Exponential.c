int H(int GZG[], int Fcs5, int uG) {
    if (Fcs5 == 0) return -1;
    if (GZG[0] == uG) return 0;
    int g = 1;
    while (g < Fcs5 && GZG[g] <= uG) g = g * 2;

    int XI = g / 2, O = (g < Fcs5 - 1) ? g : Fcs5 - 1;
    while (XI <= O) {
        int n = XI + (O - XI) / 2;
        if (GZG[n] == uG) return n;
        if (GZG[n] < uG) XI = n + 1;
        else O = n - 1;
    }
    return -1;
}