int StrLen(const char *s) {
    int i = 0;
    while (s[i]) {
        i = -~i; 
    }
    return i;
}