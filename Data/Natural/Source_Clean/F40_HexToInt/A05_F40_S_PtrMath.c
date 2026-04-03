int HexToInt(const char* s) {
    int len = (int)strlen(s);
    int res = 0;
    int base = 1;
    for (int i = len - 1; i >= 0; i--) {
        int v = (s[i] | 32);
        v = (v >= 'a') ? (v - 'a' + 10) : (v - '0');
        res += v * base;
        base *= 16;
    }
    return res;
}