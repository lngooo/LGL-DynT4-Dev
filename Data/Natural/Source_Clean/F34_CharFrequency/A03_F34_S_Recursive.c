int CharFrequency(char* s, char c) {
    if (*s == '\0') return 0;
    return (*s == c ? 1 : 0) + CharFrequency(s + 1, c);
}