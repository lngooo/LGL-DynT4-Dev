int StrLen(const char *s) {
    const char *p = s;
    while (*p) {
        p = (const char*)((size_t)p + 1);
    }
    return (int)(p - s);
}