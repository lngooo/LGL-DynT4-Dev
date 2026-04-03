int HexToInt(const char* s) {
    int res = 0;
    sscanf(s, "%x", &res);
    return res;
}