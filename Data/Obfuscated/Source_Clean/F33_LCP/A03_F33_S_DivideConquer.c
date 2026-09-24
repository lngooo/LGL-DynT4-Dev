void bV(char **O, int Q, char *ml0) {
    if (Q <= 0) return;
    if (Q == 1) { strcpy(ml0, O[0]); return; }
    char oV[128] = {0}, U[128] = {0};
    int m0 = Q / 2;
    bV(O, m0, oV);
    bV(O + m0, Q - m0, U);
    int mi = 0;
    while (oV[mi] && U[mi] && oV[mi] == U[mi]) { ml0[mi] = oV[mi]; mi++; }
    ml0[mi] = '\0';
}