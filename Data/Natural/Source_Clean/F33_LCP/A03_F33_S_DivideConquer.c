void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    if (n == 1) { strcpy(res, strs[0]); return; }
    char l_res[128] = {0}, r_res[128] = {0};
    int mid = n / 2;
    LCP(strs, mid, l_res);
    LCP(strs + mid, n - mid, r_res);
    int i = 0;
    while (l_res[i] && r_res[i] && l_res[i] == r_res[i]) { res[i] = l_res[i]; i++; }
    res[i] = '\0';
}