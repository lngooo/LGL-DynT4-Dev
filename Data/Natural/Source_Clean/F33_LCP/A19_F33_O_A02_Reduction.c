void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    int k = 0;
    while (strs[0][k]) { res[k] = strs[0][k]; k++; }
    res[k] = '\0';
    for (int i = 1; i < n; i++) {
        int j = 0;
        while (res[j] && strs[i][j] && res[j] == strs[i][j]) j++;
        res[j] = '\0';
        if (!res[0]) break;
    }
}