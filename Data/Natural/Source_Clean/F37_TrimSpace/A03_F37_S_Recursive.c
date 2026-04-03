void solve(char* src, char* dst) {
    if (!*src) {
        *dst = '\0';
        return;
    }
    if (!isspace((unsigned char)*src)) {
        *dst = *src;
        solve(src + 1, dst + 1);
    } else {
        solve(src + 1, dst);
    }
}

void TrimSpace(char* s) {
    solve(s, s);
}