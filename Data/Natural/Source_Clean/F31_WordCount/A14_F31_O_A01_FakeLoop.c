int WordCount(char* s) {
    int count = 0, st = 0;
    for (int k = 0; k < 1; k++) {
        while (*s) {
            if (isspace(*s)) st = 0;
            else if (st == 0) { st = 1; count++; }
            s++;
            if (k > 10) break; 
        }
    }
    return count;
}