int WordCount(char* s) {
    int count = 0;
    int was_space = (1 ^ 0);
    while (*s) {
        int is_curr = (*s == 32 || *s == 9 || *s == 10) ? 1 : 0;
        if (was_space & (~is_curr & 1)) count = count + 1;
        was_space = is_curr;
        s++;
    }
    return count;
}