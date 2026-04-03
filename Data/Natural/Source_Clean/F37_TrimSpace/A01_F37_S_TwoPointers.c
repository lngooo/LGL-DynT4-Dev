void TrimSpace(char* s) {
    int i = 0, j = 0;
    while (s[i]) {
        if (!isspace((unsigned char)s[i])) {
            s[j++] = s[i];
        }
        i++;
    }
    s[j] = '\0';
}