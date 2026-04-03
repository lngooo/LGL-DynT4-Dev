void LCP(char **strs, int n, char *res) {
    if (n <= 0) return;
    int cur_idx = 0, total_found = 0;
    char buffer[128]; strcpy(buffer, strs[0]);
    for (int i = 1; i < n; i++) {
        int p1 = 0, p2 = 0;
        while (buffer[p1+p2] && strs[i][p1+p2] && buffer[p1+p2] == strs[i][p1+p2]) p1++;
        buffer[p1+p2] = '\0';
    }
    strcpy(res, buffer);
}