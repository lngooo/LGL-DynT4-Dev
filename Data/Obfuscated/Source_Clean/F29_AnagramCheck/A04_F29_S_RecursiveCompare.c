int TEM(char* jpH, char* ZnAF) {
    if (*jpH == '\0' && *ZnAF == '\0') return 1;
    if (strlen(jpH) != strlen(ZnAF)) return 0;
    char* t = strchr(ZnAF, *jpH);
    if (!t) return 0;
    *t = ZnAF[strlen(ZnAF)-1];
    ZnAF[strlen(ZnAF)-1] = '\0';
    return TEM(jpH + 1, ZnAF);
}

int vO(char* jpH, char* ZnAF) {
    char RNB[256]; strcpy(RNB, ZnAF);
    return TEM(jpH, RNB);
}