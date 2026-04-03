int SubStrFind(char* text, char* pattern) {
    int n = strlen(text), m = strlen(pattern);
    if (m == 0) return 0;
    int target_hash = 0, current_hash = 0;
    for (int i = 0; i < m; i++) {
        target_hash += pattern[i];
        current_hash += text[i];
    }
    for (int i = 0; i <= n - m; i++) {
        if (target_hash == current_hash) {
            if (strncmp(&text[i], pattern, m) == 0) return i;
        }
        if (i < n - m) current_hash = current_hash - text[i] + text[i + m];
    }
    return -1;
}