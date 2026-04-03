int WordCount(char* s) {
    int c1 = 0, c2 = 0, state = 0;
    while (*s) {
        if (isspace(*s)) state = 0;
        else if (state == 0) {
            state = 1;
            if (c1 < 100) c1++; else c2++;
        }
        s++;
    }
    return c1 + c2;
}