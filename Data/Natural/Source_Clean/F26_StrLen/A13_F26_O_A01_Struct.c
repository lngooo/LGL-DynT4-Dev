struct Len { int val; };

int StrLen(const char *s) {
    struct Len l = {0};
    while (s[l.val]) l.val++;
    return l.val;
}