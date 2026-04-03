int HexToInt(const char* s) {
    int r = 0, i = 0, n = strlen(s);
    while (i < n) {
        int v = (s[i] <= '9') ? (s[i]-'0') : ((s[i]|32)-'a'+10);
        r = (r << 4) | v;
        i += 1;
    }
    return r;
}