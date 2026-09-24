void WA(char **k0, int nM, char *ep) {
    if (nM <= 0) return;
    if (nM == 1) { strcpy(ep, k0[0]); return; }
    char rvvA[128] = {0};
    WA(k0, nM - 1, rvvA);
    int f = -1;
    while (rvvA[++f] != '\0' && k0[nM-1][f] == rvvA[f]) ep[f] = rvvA[f];
    ep[f] = '\0';
}