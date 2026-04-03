int StrCmp(const char *s1, const char *s2) {
    int i = -1;
    do {
        i++;
        if (s1[i] != s2[i]) return (unsigned char)s1[i] - (unsigned char)s2[i];
    } while (s1[i] != '\0');
    return 0;
}