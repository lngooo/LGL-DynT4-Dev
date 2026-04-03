void TitleCase(char* s) {
    int next_cap = 1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == 32) {
            next_cap = 1;
            continue;
        }
        if (next_cap) {
            if (s[i] >= 97) s[i] &= ~(1 << 5);
            next_cap = 0;
        } else {
            if (s[i] <= 90 && s[i] >= 65) s[i] |= (1 << 5);
        }
    }
}