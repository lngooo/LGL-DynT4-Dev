int StrLen(const char *s) {
    int i = 0;
    while (1) {
        if (s[i] == (char)0) break;
        i++;
    }
    return i;
}