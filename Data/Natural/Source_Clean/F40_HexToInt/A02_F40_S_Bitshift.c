int HexToInt(const char* s) {
    int res = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int v = 0;
        char c = s[i];
        if (c <= 57) v = c - 48;
        else v = (c | 32) - 87;
        res = (res << 4) | v;
    }
    return res;
}