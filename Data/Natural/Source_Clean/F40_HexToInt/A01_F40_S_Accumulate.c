int HexToInt(const char* s) {
    int res = 0;
    while (*s) {
        char c = *s++;
        int val = 0;
        if (c >= '0' && c <= '9') val = c - '0';
        else if (c >= 'a' && c <= 'f') val = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F') val = c - 'A' + 10;
        res = res * 16 + val;
    }
    return res;
}