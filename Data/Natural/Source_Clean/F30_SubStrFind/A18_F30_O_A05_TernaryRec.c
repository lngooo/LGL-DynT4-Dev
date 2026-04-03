int rec(char* t, char* p, int i, int m) {
    return (*t == '\0') ? -1 : (strncmp(t, p, m) == 0 ? i : rec(t + 1, p, i + 1, m));
}

int SubStrFind(char* text, char* pattern) {
    int m = strlen(pattern);
    return (m == 0) ? 0 : rec(text, pattern, 0, m);
}