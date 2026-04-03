void StrCompress(char* s) {
    while (*s) {
        char charset[2] = {*s, '\0'};
        int run = strspn(s, charset);
        printf("%c%d", *s, run);
        s += run;
    }
    printf("\n");
}