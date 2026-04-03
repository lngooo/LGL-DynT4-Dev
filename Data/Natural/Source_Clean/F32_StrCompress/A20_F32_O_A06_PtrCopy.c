void StrCompress(char* s) {
    char *t = s;
    while (*t) {
        int n = 0;
        char c = *t;
        char *runner = t;
        while (*runner == c) { n++; runner++; }
        printf("%c%d", c, n);
        t = runner;
    }
    printf("\n");
}