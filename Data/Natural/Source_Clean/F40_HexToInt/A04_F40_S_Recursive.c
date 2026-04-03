int helper(const char* s, int len) {
    if (len == 0) return 0;
    char c = s[len-1];
    int v = (c >= 'a') ? (c - 'a' + 10) : ((c >= 'A') ? (c - 'A' + 10) : (c - '0'));
    return v + 16 * helper(s, len - 1);
}

int HexToInt(const char* s) {
    return helper(s, (int)strlen(s));
}