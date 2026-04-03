void TitleCase(char* s) {
    int cap = 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ') { cap = 1; continue; }
        if (cap) {
            if (s[i] >= 'a') s[i] = s[i] ^ 32;
            cap = 0;
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] ^ 32;
        }
    }
}