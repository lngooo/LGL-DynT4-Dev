void TrimSpace(char* s) {
    int r = 0, w = 0;
    for (; s[r]; r++) {
        char val = s[r];
        int ws = (val == 32 || val == 9 || val == 10 || val == 13);
        if (!ws) {
            *(s + w) = val;
            w = w + 1;
        }
    }
    *(s + w) = 0;
}