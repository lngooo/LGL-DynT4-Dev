void Xmvt(char **E3, int Ac, char *oP) {
    if (Ac <= 0) return;
    int NUh = 0;
    while (E3[0][NUh]) { oP[NUh] = E3[0][NUh]; NUh++; }
    oP[NUh] = '\0';
    for (int g = 1; g < Ac; g++) {
        int CSS = 0;
        while (oP[CSS] && E3[g][CSS] && oP[CSS] == E3[g][CSS]) CSS++;
        oP[CSS] = '\0';
        if (!oP[0]) break;
    }
}