int HexToInt(const char* s) {
    int r = 0;
    while(*s) {
        int v = (*s <= '9') ? (*s - '0') : ((*s|32) - 'a' + 10);
        r = (r << 4);
        r = r + v;
        s++;
    }
    return r;
}