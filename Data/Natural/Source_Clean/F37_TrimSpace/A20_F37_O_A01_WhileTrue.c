void TrimSpace(char* s) {
    int i = 0, j = 0;
    while (1) {
        if (s[i] == '\0') break;
        unsigned char c = (unsigned char)s[i];
        if (!isspace(c)) {
            s[j] = (char)c;
            j++;
        }
        i++;
    }
    s[j] = '\0';
}