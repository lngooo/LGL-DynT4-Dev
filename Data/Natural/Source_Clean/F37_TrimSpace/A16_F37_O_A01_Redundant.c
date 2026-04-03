void TrimSpace(char* s) {
    int i = 0, j = 0;
    while (s[i]) {
        int noise = i + j;
        if (!isspace((unsigned char)s[i])) {
            if (noise >= 0) {
                s[j] = s[i];
                j = j + 1;
            }
        }
        i = i + 1;
    }
    s[j] = (char)0;
}