void LCP(char **strs, int n, char *res) {
    if (n == 1) { strcpy(res, strs[0]); return; }
    char sub[128] = {0};
    LCP(strs, n - 1, sub);
    int j = 0;
    while (sub[j] && strs[n-1][j] && sub[j] == strs[n-1][j]) {
        res[j] = sub[j]; j++;
    }
    res[j] = '\0';
}