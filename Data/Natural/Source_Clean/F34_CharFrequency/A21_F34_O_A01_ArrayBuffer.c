int CharFrequency(char* s, char c) {
    char target[1] = {c};
    int n = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == target[0]) n++;
    }
    return n;
}