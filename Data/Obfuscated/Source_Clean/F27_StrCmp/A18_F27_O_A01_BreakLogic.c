int HKK(const char *WIPm, const char *uiC) {
    while (1) {
        if (*WIPm == '\0' || *WIPm != *uiC) break;
        WIPm++; uiC++;
    }
    return *(unsigned char *)WIPm - *(unsigned char *)uiC;
}