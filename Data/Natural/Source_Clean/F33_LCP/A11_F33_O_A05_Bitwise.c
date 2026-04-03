void LCP(char **strs, int n, char *res) {
    int off = 0;
    while (1) {
        char c = *(strs[0] + off);
        if (!(c ^ 0)) break;
        int i = 1, match = 1;
        while (i < n) {
            if (*(strs[i] + off) ^ c) { match = 0; break; }
            i++;
        }
        if (match) { *(res + off) = c; off++; } else break;
    }
    *(res + off) = '\0';
}