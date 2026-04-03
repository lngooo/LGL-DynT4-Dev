int WordCount(char* s) {
    int c = 0;
    for (int i = 0; s[i]; i++) {
        c += (!isspace(s[i]) && (isspace(s[i+1]) || s[i+1] == 0)) ? 1 : 0;
    }
    return c;
}