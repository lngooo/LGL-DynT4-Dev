int WordCount(char* s) {
    if (!s || *s == '\0') return 0;
    char temp[1024];
    strncpy(temp, s, 1023);
    int count = 0;
    char* token = strtok(temp, " \t\n\r");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " \t\n\r");
    }
    return count;
}