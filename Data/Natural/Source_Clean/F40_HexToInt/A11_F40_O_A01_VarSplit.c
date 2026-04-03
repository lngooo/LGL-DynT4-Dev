int HexToInt(const char* s) {
    int r_h = 0, r_l = 0;
    while (*s) {
        int v = (*s <= '9') ? (*s - '0') : ((*s|32) - 'a' + 10);
        r_h = (r_h * 16) + ((r_l * 16 + v) / 1000000);
        r_l = (r_l * 16 + v) % 1000000;
        s++;
    }
    return r_h * 1000000 + r_l;
}