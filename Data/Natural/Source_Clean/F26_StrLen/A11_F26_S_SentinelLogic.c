int StrLen(const char *s) {
    int i;
    for (i = 0; s[i]; ++i);
    return i;
}