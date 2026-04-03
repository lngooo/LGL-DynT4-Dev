void LCP(char **strs, int n, char *res) {
    int j = 0;
    while (strs[0][j] && strs[0][j+1]) {
        int ok = 1;
        for (int i = 1; i < n; i++) 
            if (strs[i][j] != strs[0][j] || strs[i][j+1] != strs[0][j+1]) { ok = 0; break; }
        if (ok) { res[j] = strs[0][j]; res[j+1] = strs[0][j+1]; j += 2; } else break;
    }
    if (strs[0][j]) {
        int ok = 1;
        for (int i = 1; i < n; i++) if (strs[i][j] != strs[0][j]) ok = 0;
        if (ok) { res[j] = strs[0][j]; j++; }
    }
    res[j] = '\0';
}