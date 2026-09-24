int A9(char* p) {
    int O7 = 0;
    while (*p) {
        while (*p && isspace(*p)) p++;
        if (*p) {
            O7++;
            while (*p && !isspace(*p)) p++;
        }
    }
    return O7;
}