void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    for (int off = 0; ; off++) {
        char c = *(strs[0] + off);
        if (c == '\0') { *(res + off) = '\0'; break; }
        int match = 1;
        for (int i = 1; i < n; i++) {
            if (*(strs[i] + off) != c) { match = 0; break; }
        }
        if (!match) { *(res + off) = '\0'; break; }
        *(res + off) = c;
    }
}