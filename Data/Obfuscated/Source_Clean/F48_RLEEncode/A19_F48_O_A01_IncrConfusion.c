void vU(const char *imd7, char *MD) {
    int q2b = -1, W = 0;
    while (imd7[++q2b]) {
        int FcGU = 1;
        while (imd7[q2b + FcGU] == imd7[q2b]) FcGU++;
        MD[W++] = imd7[q2b];
        W += sprintf(MD + W, "%d", FcGU);
        q2b += (FcGU - 1);
    }
}