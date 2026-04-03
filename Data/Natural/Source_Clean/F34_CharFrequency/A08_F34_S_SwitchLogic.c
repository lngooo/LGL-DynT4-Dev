int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        switch (*s == c) {
            case 1: count++; break;
            default: break;
        }
        s++;
    }
    return count;
}