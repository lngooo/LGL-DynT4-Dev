int oTCZ(char* g, char* ii, int C, int xYSB) {
    if (*g == '\0') return -1;
    if (strncmp(g, ii, xYSB) == 0) return C;
    return oTCZ(g + 1, ii, C + 1, xYSB);
}

int T(char* OIg, char* EcrB) {
    int xYSB = strlen(EcrB);
    if (xYSB == 0) return 0;
    return oTCZ(OIg, EcrB, 0, xYSB);
}