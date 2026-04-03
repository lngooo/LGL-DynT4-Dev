int SubStrFind(char* text, char* pattern) {
    char* current = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
    while ((current = strchr(current, pattern[0])) != NULL) {
        if (strncmp(current, pattern, m) == 0) return (int)(current - text);
        current++;
    }
    return -1;
}