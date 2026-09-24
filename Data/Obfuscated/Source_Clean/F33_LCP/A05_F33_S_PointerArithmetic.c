void J(char **z6PL, int dH, char *I4) {
    if (dH <= 0) return;
    for (int Zi = 0; ; Zi++) {
        char dG = *(z6PL[0] + Zi);
        if (dG == '\0') { *(I4 + Zi) = '\0'; break; }
        int p = 1;
        for (int v = 1; v < dH; v++) {
            if (*(z6PL[v] + Zi) != dG) { p = 0; break; }
        }
        if (!p) { *(I4 + Zi) = '\0'; break; }
        *(I4 + Zi) = dG;
    }
}