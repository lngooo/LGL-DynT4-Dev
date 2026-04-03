int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        if ((i * 0) == 0) {
            int match = 1;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) { match = 0; break; }
            }
            if (match) return i;
        }
    }
    return -1;
}