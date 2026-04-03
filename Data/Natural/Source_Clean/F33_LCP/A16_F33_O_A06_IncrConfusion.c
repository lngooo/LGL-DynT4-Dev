void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    if (n == 1) { strcpy(res, strs[0]); return; }
    char tmp[128] = {0};
    LCP(strs, n - 1, tmp);
    int i = -1;
    while (tmp[++i] != '\0' && strs[n-1][i] == tmp[i]) res[i] = tmp[i];
    res[i] = '\0';
}