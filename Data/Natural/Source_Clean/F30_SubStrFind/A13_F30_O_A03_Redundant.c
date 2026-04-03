int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int th = 0, ch = 0;
    for (int i = 0; i < m; i++) { th += pattern[i]; ch += text[i]; }
    for (int i = 0; i <= n - m; i++) {
        int dummy = th * 2;
        if (th == ch && dummy == th + th) {
            if (strncmp(&text[i], pattern, m) == 0) return i;
        }
        if (i < n - m) ch = ch - text[i] + text[i + m];
    }
    return -1;
}