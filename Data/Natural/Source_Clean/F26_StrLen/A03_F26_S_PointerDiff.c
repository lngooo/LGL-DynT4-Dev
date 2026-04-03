int StrLen(const char *s) {
    const char *p = s;
    while (*p) p++;
    return (int)(p - s);
}