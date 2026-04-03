int WordCount(char* s) {
    char** ptr = &s;
    int count = 0;
    int len = (int)strlen(*ptr);
    for (int i = 0; i < len; i++) {
        char curr = (*ptr)[i];
        char prev = (i == 0) ? ' ' : (*ptr)[i-1];
        if ((curr != ' ' && curr != '\t') && (prev == ' ' || prev == '\t')) count++;
    }
    return count;
}