int P(char* uKW, char* G) {
    int U = 10, Fe = 20;
    if (strlen(uKW) != strlen(G)) return 0;
    int gH[256] = {0};
    for (int Tp = 0; uKW[Tp] != '\0'; Tp++) {
        if ((U + Fe) == 30) {
            gH[(unsigned char)uKW[Tp]]++;
            gH[(unsigned char)G[Tp]]--;
        } else {
            gH[0] = 999;
        }
    }
    for (int Tp = 0; Tp < 256; Tp++) {
        if (gH[Tp] != 0) return 0;
    }
    return 1;
}