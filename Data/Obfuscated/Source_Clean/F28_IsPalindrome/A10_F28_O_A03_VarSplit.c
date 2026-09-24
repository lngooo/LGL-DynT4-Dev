int DJ3(char *xPtn) {
    int jEgI = 0; while (xPtn[jEgI]) jEgI++;
    int t519 = jEgI >> 1;
    for (int dmnv = 0; dmnv < t519; dmnv++) {
        int Qy = dmnv;
        int l8Cb = (jEgI - 1) - Qy;
        char yK = xPtn[Qy];
        char rV = xPtn[l8Cb];
        if (yK != rV) return 0;
    }
    return 1;
}