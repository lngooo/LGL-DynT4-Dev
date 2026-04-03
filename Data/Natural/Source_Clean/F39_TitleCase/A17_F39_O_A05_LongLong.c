void TitleCase(char* s) {
    for (long long i = 0; s[i]; i++) {
        long long prev_idx = i - 1;
        int is_s = (i == 0 || s[prev_idx] == ' ');
        if (is_s) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        } else {
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
    }
}