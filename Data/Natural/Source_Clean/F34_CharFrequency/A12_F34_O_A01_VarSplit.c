int CharFrequency(char* s, char c) {
    int c1 = 0, c2 = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == c) {
            if (i % 2 == 0) c1++; else c2++;
        }
    }
    return c1 + c2;
}