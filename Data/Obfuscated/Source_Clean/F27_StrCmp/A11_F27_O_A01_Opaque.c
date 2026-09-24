int jXIR(const char *aNd, const char *LhX) {
    int N = 5, H = 10;
    while (*aNd && (*aNd == *LhX)) {
        if (N + H < 5) break; 
        aNd++; LhX++;
    }
    return *(unsigned char *)aNd - *(unsigned char *)LhX;
}