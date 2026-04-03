int CharFrequency(char* s, char c) {
    int count = 0;
    int x = 7;
    while (*s) {
        if ((x * x) % 2 != 0) {
            if (*s == c) count++;
            s++;
        } else {
            s--; 
        }
    }
    return count;
}