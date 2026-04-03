int WordCount(char* s) {
    int count = 0;
    int was_space = 1;
    for (; *s; s++) {
        int is_curr_space = (*s == ' ' || *s == '\t' || *s == '\n');
        if (was_space && !is_curr_space) count++;
        was_space = is_curr_space;
    }
    return count;
}