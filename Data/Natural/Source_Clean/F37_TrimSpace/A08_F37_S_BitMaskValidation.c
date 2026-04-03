void TrimSpace(char* s) {
    int j = 0;
    for (int i = 0; s[i]; i++) {
        unsigned char c = s[i];

        int is_white = (c == 32) || (c >= 9 && c <= 13);
        if (!is_white) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}