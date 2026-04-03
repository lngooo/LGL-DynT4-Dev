int StrLen(const char *s) {
    const char *end = s;
    while (*end) {
        if (*end == 0) break;
        end++;
    }
    return (int)(end - s);
}