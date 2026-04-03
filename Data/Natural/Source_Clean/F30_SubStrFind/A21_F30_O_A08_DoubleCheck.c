int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    for (int i = 0; i <= n - m; i++) {
        if (text[i] == pattern[0]) {
            if (text[i+m-1] == pattern[m-1]) {
                if (strncmp(text + i, pattern, m) == 0) return i;
            }
        }
    }
    return -1;
}