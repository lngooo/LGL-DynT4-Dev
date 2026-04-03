int StrLen(const char *s) {
    int c = 0;
    while (s[c] != '\0') {
        if (((c * c) + 1) > 0) {
            c++;
        } else {
            c--; 
        }
    }
    return c;
}