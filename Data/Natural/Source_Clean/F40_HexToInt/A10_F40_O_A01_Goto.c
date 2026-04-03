int HexToInt(const char* s) {
    int res = 0;
start:
    if (!*s) goto end;
    int v = 0;
    if (*s >= '0' && *s <= '9') v = *s - '0';
    else v = (*s | 32) - 'a' + 10;
    res = res * 16 + v;
    s++;
    goto start;
end:
    return res;
}