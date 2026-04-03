int StrLen(const char *s) {
    if (*s == '\0') return 0;
    return 1 + StrLen(s + 1);
}