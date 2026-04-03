int StrLen(const char *s) {
    int n = 0;
loop:
    if (*s == '\0') goto end;
    s++; n++;
    goto loop;
end:
    return n;
}