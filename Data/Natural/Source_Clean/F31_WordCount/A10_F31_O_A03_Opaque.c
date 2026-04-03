int WordCount(char* s) {
    int count = 0;
    int a = 5, b = 10;
    for (int i = 0; s[i] != '\0'; i++) {
        if (a + b == 15) {
            if (!isspace(s[i]) && (isspace(s[i+1]) || s[i+1] == '\0')) count++;
        } else {
            count--; 
        }
    }
    return count;
}