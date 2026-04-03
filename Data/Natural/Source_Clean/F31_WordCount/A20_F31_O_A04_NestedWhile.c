int WordCount(char* s) {
    int count = 0;
    while (*s) {
        if (isspace(*s)) {
            while (*s && isspace(*s)) s++;
        } else {
            count++;
            while (*s && !isspace(*s)) {
                if (*s == 0) break;
                s++;
            }
        }
    }
    return count;
}