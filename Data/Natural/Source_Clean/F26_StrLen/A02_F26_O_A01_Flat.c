int StrLen(const char *s) {
    int len = 0, state = 0;
    while (state != 2) {
        switch (state) {
            case 0: if (s[len] != '\0') state = 1; else state = 2; break;
            case 1: len++; state = 0; break;
        }
    }
    return len;
}