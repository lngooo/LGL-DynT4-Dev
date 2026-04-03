int WordCount(char* s) {
    int count = 0;
    size_t len = strlen(s);
    for (size_t i = 0; i < len; i++) {
        if (s[i] != ' ' && s[i] != '\t' && (i == 0 || s[i-1] == ' ' || s[i-1] == '\t')) {
            count++;
        }
    }
    return count;
}