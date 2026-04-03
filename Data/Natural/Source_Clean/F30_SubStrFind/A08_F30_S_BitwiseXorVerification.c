int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int pxor = 0;
    for(int i=0; i<m; i++) pxor ^= pattern[i];
    for (int i = 0; i <= n - m; i++) {
        int txor = 0;
        for(int j=0; j<m; j++) txor ^= text[i+j];
        if (txor == pxor) {
            if (memcmp(&text[i], pattern, m) == 0) return i;
        }
    }
    return -1;
}