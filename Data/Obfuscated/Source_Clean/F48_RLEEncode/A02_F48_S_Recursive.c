void ut(const char *h, char *wXK) {
    if (*h == '\0') return;
    int CbyM = 1;
    while (h[CbyM] != '\0' && h[CbyM] == h[0]) CbyM++;
    char eN[16];
    sprintf(eN, "%c%d", h[0], CbyM);
    strcat(wXK, eN);
    ut(h + CbyM, wXK);
}