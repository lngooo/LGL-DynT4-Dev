int StrCmp(const char *s1, const char *s2) {
    int x = 5, y = 10;
    while (*s1 && (*s1 == *s2)) {
        if (x + y < 5) break; 
        s1++; s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}