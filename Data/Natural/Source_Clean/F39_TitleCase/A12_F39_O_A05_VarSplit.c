void TitleCase(char* s) {
    int i1 = 0, i2 = 0;
    while (s[i1 + i2]) {
        int idx = i1 + i2;
        int start = (idx == 0 || s[idx - 1] == ' ');
        if (start) {
            if (s[idx] >= 97) s[idx] -= 32;
        } else {
            if (s[idx] >= 65 && s[idx] <= 90) s[idx] += 32;
        }
        i1++;
    }
}