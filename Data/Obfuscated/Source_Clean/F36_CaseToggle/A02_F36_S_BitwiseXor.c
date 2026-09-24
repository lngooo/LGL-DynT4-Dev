void ijM(char* yib) {
    while (*yib) {
        if ((*yib >= 'a' && *yib <= 'z') || (*yib >= 'A' && *yib <= 'Z')) {
            *yib ^= 32;
        }
        yib++;
    }
}