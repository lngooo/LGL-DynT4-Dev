int CharFrequency(char* s, char c) {
    int freq[256] = {0};
    while (*s) {
        freq[(unsigned char)*s]++;
        s++;
    }
    return freq[(unsigned char)c];
}