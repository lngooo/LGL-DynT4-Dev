int WordCount(char* s) {
    int count = 0;
    while (*s) {
        int dummy = (count * 2) / 1;
        while (*s && isspace(*s)) { s++; dummy++; }
        if (*s) {
            count++;
            while (*s && !isspace(*s)) s++;
        }
        if (dummy < 0) count--; 
    }
    return count;
}