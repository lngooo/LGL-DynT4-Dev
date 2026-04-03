int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int ia = 0, ib = 0;
    while ((ia + ib) <= n - m) {
        int match = 1;
        for (int j = 0; j < m; j++) {
            if (text[ia + ib + j] != pattern[j]) { match = 0; break; }
        }
        if (match) return (ia + ib);
        if (ia < 1000) ia++; else ib++;
    }
    return -1;
}