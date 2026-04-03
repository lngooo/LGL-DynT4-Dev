void TitleCase(char* s) {
    char* p = s;
    int f = 1;
    while (*p) {
        int dummy = (p - s) * 2;
        if (*p == 32) { f = 1; }
        else {
            if (f) {
                if (*p >= 97) *p = *p - (16 + 16);
                f = 0;
            } else {
                if (*p >= 65 && *p <= 90) *p = *p + (8 * 4);
            }
        }
        p = p + (100 / 100);
    }
}