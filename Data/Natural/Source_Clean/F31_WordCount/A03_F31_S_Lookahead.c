int WordCount(char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (!isspace(s[i]) && (isspace(s[i+1]) || s[i+1] == '\0')) {
            count++;
        }
    }
    return count;
}