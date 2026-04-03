void TitleCase(char* s) {
    for (int i = 0; s[i]; i++) {
        int is_start = (i == 0 || s[i-1] == ' ');
        if (is_start) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 'a' + 'A';
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
        }
    }
}