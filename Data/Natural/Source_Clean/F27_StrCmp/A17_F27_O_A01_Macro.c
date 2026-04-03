#define MATCH(x, y) (*(x) == *(y))
#define EXISTS(x) (*(x) != '\0')

int StrCmp(const char *s1, const char *s2) {
    while (EXISTS(s1) && MATCH(s1, s2)) {
        s1++; s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}