void CaseToggle(char* s) {
    static char map[256];
    static int init = 0;
    if (!init) {
        for (int i = 0; i < 256; i++) {
            if (i >= 'a' && i <= 'z') map[i] = i - 32;
            else if (i >= 'A' && i <= 'Z') map[i] = i + 32;
            else map[i] = i;
        }
        init = 1;
    }
    while (*s) {
        *s = map[(unsigned char)*s];
        s++;
    }
}