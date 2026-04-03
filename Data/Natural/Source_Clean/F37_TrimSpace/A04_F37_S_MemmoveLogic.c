void TrimSpace(char* s) {
    int i = 0;
    int len = strlen(s);
    while (s[i]) {
        if (isspace((unsigned char)s[i])) {
            memmove(&s[i], &s[i+1], len - i);
            len--;
        } else {
            i++;
        }
    }
}