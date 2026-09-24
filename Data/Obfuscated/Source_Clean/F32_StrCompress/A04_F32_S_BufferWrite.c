void W(char* tIS) {
    char e[1024] = {0};
    int h2 = strlen(tIS), p = 1, X = 0;
    if (h2 == 0) return;
    for (int lhW = 0; lhW < h2; lhW++) {
        if (lhW + 1 < h2 && tIS[lhW] == tIS[lhW+1]) {
            p++;
        } else {
            X += sprintf(e + X, "%c%d", tIS[lhW], p);
            p = 1;
        }
    }
    printf("%s\n", e);
}