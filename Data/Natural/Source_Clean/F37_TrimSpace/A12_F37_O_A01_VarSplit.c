void TrimSpace(char* s) {
    int i = 0, j_base = 0, j_off = 0;
    while (s[i]) {
        if (!isspace((unsigned char)s[i])) {
            s[j_base + j_off] = s[i];
            if (j_off < 10) j_off++;
            else { j_base += j_off; j_off = 1; }
        }
        i++;
    }
    s[j_base + j_off] = '\0';
}