int helper(char* t, char* p, int idx, int m) {
    if (*t == '\0') return -1;
    if (strncmp(t, p, m) == 0) return idx;
    return helper(t + 1, p, idx + 1, m);
}

int SubStrFind(char* text, char* pattern) {
    int m = strlen(pattern);
    if (m == 0) return 0;
    return helper(text, pattern, 0, m);
}