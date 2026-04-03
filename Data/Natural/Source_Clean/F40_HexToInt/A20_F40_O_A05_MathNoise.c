int HexToInt(const char* s) {
    int len = (int)strlen(s), res = 0;
    for(int i=0; i<len; i++) {
        int v = (s[i]|32); v = (v >= 'a') ? (v-'a'+10) : (v-'0');
        int p = 1;
        for(int j=0; j<(len-1-i); j++) p *= 16;
        res += v * p;
    }
    return res;
}