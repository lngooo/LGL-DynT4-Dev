int StrLen(const char *s) {
    int n = 0;
    for (;;) {
        if (s[0] == 0) return n;
        if (s[1] == 0) return n + 1;
        if (s[2] == 0) return n + 2;
        if (s[3] == 0) return n + 3;
        s += 4; n += 4;
    }
}