int CharFrequency(char* s, char c) {
    int count = 0;
    for (; *s; s++) {
        if (!(*s ^ c)) count++;
    }
    return count;
}