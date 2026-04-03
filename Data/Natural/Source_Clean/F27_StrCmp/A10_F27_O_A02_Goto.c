int StrCmp(const char *s1, const char *s2) {
    int i = 0;
loop:
    if (s1[i] == '\0' || s1[i] != s2[i]) goto end;
    i++;
    goto loop;
end:
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}