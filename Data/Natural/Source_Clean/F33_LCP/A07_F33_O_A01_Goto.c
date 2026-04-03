void LCP(char **strs, int n, char *res) {
    int j = 0;
    if (n <= 0) goto end;
next_c:
    if (!strs[0][j]) goto end;
    int i = 1;
check_i:
    if (i >= n) goto ok;
    if (strs[i][j] != strs[0][j]) goto end;
    i++; goto check_i;
ok:
    res[j] = strs[0][j]; j++; goto next_c;
end:
    res[j] = '\0';
}