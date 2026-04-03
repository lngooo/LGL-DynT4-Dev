void TitleCase(char* s) {
    char* p = s;
    int first = 1;
    while (*p) {
        if (*p == ' ' || *p == '\t' || *p == '\n') {
            first = 1;
        } else {
            if (first) {
                if (*p >= 'a' && *p <= 'z') *p -= 32;
                first = 0;
            } else {
                if (*p >= 'A' && *p <= 'Z') *p += 32;
            }
        }
        p++;
    }
}