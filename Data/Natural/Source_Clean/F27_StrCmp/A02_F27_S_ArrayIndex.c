int StrCmp(const char *s1, const char *s2) {
    int i = 0;
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
    }
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}