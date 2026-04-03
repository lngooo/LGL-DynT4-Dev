int HexToInt(const char* s) {
    int res = 0;
    while (!!*s) {
        int v = 0;
        if (!(*s < '0' || *s > '9')) v = *s - '0';
        else v = (*s | 32) - 'a' + 10;
        res = (res * 16) + v;
        s++;
    }
    return res;
}