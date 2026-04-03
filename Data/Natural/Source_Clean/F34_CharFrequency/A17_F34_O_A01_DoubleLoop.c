int CharFrequency(char* s, char c) {
    int count = 0;
    for (int i = 0; s[i]; i++) {
        for (int j = 0; j < 1; j++) {
            if (s[i] == c) count++;
        }
    }
    return count;
}