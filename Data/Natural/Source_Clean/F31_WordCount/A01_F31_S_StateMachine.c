int WordCount(char* s) {
    int count = 0, state = 0; 
    while (*s) {
        if (isspace(*s)) state = 0;
        else if (state == 0) {
            state = 1;
            count++;
        }
        s++;
    }
    return count;
}