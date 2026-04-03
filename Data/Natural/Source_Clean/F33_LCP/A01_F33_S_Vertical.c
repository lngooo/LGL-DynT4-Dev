void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    int idx = 0;
    while (strs[0][idx]) {
        char c = strs[0][idx];
        for (int i = 1; i < n; i++) {
            if (strs[i][idx] != c) { res[idx] = '\0'; return; }
        }
        res[idx] = c;
        idx++;
    }
    res[idx] = '\0';
}