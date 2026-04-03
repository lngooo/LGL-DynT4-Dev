void tr(char* s, int r, int w) {
    if (!s[r]) {
        s[w] = 0;
        return;
    }
    if (!isspace((unsigned char)s[r])) {
        s[w] = s[r];
        tr(s, r + 1, w + 1);
    } else {
        tr(s, r + 1, w);
    }
}

void TrimSpace(char* s) {
    tr(s, 0, 0);
}