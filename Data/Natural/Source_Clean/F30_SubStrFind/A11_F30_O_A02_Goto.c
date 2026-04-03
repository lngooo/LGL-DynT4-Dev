int SubStrFind(char* text, char* pattern) {
    char* p = text;
    int m = strlen(pattern);
    if (m == 0) return 0;
check_start:
    if (!*p) goto fail;
    if (strncmp(p, pattern, m) == 0) goto success;
    p++;
    goto check_start;
success:
    return (int)(p - text);
fail:
    return -1;
}