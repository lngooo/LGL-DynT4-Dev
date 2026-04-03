int StrCmp(const char *s1, const char *s2) {
    while (1) {
        if (*s1 == '\0' || *s1 != *s2) break;
        s1++; s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}