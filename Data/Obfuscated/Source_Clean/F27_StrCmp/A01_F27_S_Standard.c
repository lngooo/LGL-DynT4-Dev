int w9p(const char *CYd, const char *DSO) {
    while (*CYd && (*CYd == *DSO)) {
        CYd++;
        DSO++;
    }
    return *(unsigned char *)CYd - *(unsigned char *)DSO;
}