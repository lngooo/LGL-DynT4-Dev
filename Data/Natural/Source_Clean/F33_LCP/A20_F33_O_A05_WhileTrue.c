void LCP(char **strs, int n, char *res) {
    int p = 0;
    while (1) {
        char target = strs[0][p];
        if (!target) break;
        int fail = 0;
        for (int i = 1; i < n; i++) if (strs[i][p] != target) { fail = 1; break; }
        if (fail) break;
        res[p++] = target;
    }
    res[p] = 0;
}