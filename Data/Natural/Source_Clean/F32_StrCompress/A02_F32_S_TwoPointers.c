void StrCompress(char* s) {
    char *p = s, *q = s;
    while (*p) {
        q = p;
        while (*q == *p) q++;
        printf("%c%ld", *p, (long)(q - p));
        p = q;
    }
    printf("\n");
}