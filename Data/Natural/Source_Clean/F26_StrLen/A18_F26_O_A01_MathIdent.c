int StrLen(const char *s) {
    int i = 0;
    while (s[i]) {
        i = (i + 1);
    }
    return (i * 2) / 2;
}