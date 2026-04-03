void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    strcpy(res, strs[0]);
    for (int i = 1; i < n; i++) {
        int j = 0;
        while (res[j] && strs[i][j] && res[j] == strs[i][j]) j++;
        res[j] = '\0';
    }
}