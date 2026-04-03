int StrCmp(const char *s1, const char *s2) {
    while (!(*s1 ^ *s2) && *s1) {
        s1++; s2++;
    }
    return (int)((unsigned char)*s1 - (unsigned char)*s2);
}