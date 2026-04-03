void LCP(char **strs, int n, char *res) {
    int j = 0;
    while (!!strs[0][j]) {
        int ok = 1;
        for (int i = 1; i < n; i++) if (strs[i][j] != strs[0][j]) ok = 0;
        if (!!ok) { res[j] = strs[0][j]; j++; } else break;
    }
    res[j] = '\0';
}