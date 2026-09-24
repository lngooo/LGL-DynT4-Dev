int q(char* r3s, char* u7) {
    char* pKm = r3s;
    int tm0 = strlen(u7);
    if (tm0 == 0) return 0;
HRA:
    if (!*pKm) goto qMB;
    if (strncmp(pKm, u7, tm0) == 0) goto XN;
    pKm++;
    goto HRA;
XN:
    return (int)(pKm - r3s);
qMB:
    return -1;
}