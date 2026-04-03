int StrCmp(const char *s1, const char *s2) {
    const char **p1 = &s1;
    const char **p2 = &s2;
    while (**p1 && (**p1 == **p2)) {
        (*p1)++; (*p2)++;
    }
    return (unsigned char)**p1 - (unsigned char)**p2;
}