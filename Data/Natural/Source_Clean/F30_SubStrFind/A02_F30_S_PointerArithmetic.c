int SubStrFind(char* text, char* pattern) {
    char* p = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
    while (*p) {
        if (strncmp(p, pattern, m) == 0) return (int)(p - text);
        p++;
    }
    return -1;
}