int StrCmp(const char *s1, const char *s2) {
    while (!(*s1 - *s2) && *s1 != 0) {
        s1 = (char*)((size_t)s1 + 1);
        s2 = (char*)((size_t)s2 + 1);
    }
    return (int)(*(unsigned char*)s1 - *(unsigned char*)s2);
}