int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        int dummy = (*s * 2) / 2;
        if (dummy == (int)c && *s == c) {
            count++;
        }
        s++;
    }
    return count;
}