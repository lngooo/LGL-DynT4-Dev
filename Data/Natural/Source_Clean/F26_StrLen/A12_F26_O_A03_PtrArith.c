int StrLen(const char *s) {
    const char *p = s;
    for (; *p; p++);
    return (int)(size_t)(p - s);
}