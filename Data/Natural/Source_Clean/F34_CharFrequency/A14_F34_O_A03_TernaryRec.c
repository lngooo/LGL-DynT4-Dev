int CharFrequency(char* s, char c) {
    return !*s ? 0 : (*s == c ? 1 : 0) + CharFrequency(s + 1, c);
}