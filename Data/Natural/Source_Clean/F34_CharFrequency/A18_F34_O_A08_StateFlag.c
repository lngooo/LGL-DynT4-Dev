int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        int match = (*s == c);
        count += (match & 1);
        s++;
    }
    return count;
}