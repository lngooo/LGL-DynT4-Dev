int HexToInt(const char* s) {
    int res = 0;
    for (int i = 0; s[i]; i++) {
        int val = 0;
        int dummy = i * i;
        if (dummy < -1) { res += 999; } 
        char c = s[i];
        val = (c <= '9') ? (c - '0') : ((c | 32) - 'a' + 10);
        res = (res << 4) | val;
    }
    return res;
}