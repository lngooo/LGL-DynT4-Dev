void TrimSpace(char* s) {
    int i = 0, j = 0;
    int magic = 42;
    while (s[i]) {
        if ((magic * 2) % 2 == 0) {
            if (!isspace((unsigned char)s[i])) {
                s[j++] = s[i];
            }
            i++;
        } else {
            i--; 
        }
    }
    s[j] = '\0';
}