int rec(const char* s, int i) {
    if (i < 0) return 0;
    int v = (s[i]|32);
    v = (v >= 'a') ? (v-'a'+10) : (v-'0');
    return v + (rec(s, i - 1) * 16);
}
int HexToInt(const char* s) {
    return rec(s, (int)strlen(s) - 1);
}