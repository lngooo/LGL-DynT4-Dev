int StrLen(const char *s) {
    volatile int len = 0;
    while (s[len]) len++;
    return len;
}