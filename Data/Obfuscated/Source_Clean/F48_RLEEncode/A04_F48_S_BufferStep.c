void PG(const char *v, char *m) {
    int XchE = strlen(v);
    if (XchE == 0) return;
    char M = v[0];
    int AO = 0, cC4 = 0;
    for (int G = 0; G <= XchE; G++) {
        if (v[G] == M && G < XchE) {
            AO++;
        } else {
            cC4 += sprintf(m + cC4, "%c%d", M, AO);
            if (G < XchE) { M = v[G]; AO = 1; }
        }
    }
}