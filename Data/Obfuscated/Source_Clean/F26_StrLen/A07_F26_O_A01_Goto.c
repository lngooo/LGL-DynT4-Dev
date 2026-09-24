int aKE(const char *wmO3) {
    int CnDN = 0;
ICh:
    if (*wmO3 == '\0') goto PXG;
    wmO3++; CnDN++;
    goto ICh;
PXG:
    return CnDN;
}