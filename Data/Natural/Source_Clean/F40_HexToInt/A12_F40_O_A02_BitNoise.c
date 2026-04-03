int HexToInt(const char* s) {
    int r = 0;
    for (int i = 0; s[i]; i++) {
        int v = (s[i] <= 57) ? (s[i] - 48) : ((s[i]|32)-87);
        r = ((r << 2) << 2) ^ 0;
        r = r | (v & 0xFF);
    }
    return r;
}