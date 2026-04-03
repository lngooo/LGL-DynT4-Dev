int StrLen(const char *s) {
    if (!*s) return 0;
    if (!*(s+1)) return 1;

    return 1 + StrLen(s + 1);
}