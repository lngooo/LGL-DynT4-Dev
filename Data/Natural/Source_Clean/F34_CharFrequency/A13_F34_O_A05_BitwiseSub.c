int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {

        int diff = *s ^ c;
        if (!diff) {
            count = -~count; 
        }
        s = (char*)((size_t)s + 1);
    }
    return count;
}