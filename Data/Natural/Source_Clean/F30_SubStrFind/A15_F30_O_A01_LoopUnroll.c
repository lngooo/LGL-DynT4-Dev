int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        int match = 1;
        int j = 0;
        while (j < m - 1) {
            if (text[i+j] != pattern[j] || text[i+j+1] != pattern[j+1]) { match = 0; break; }
            j += 2;
        }
        if (match && j == m - 1) if (text[i+j] != pattern[j]) match = 0;
        if (match) return i;
    }
    return -1;
}