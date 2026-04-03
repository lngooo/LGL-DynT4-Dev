void StrCompress(char* s) {
    char *curr = s;
    while (*curr) {
        char *scan = curr;
        while (*(scan + 1) == *curr) scan++;
        printf("%c%d", *curr, (int)(scan - curr + 1));
        curr = scan + 1;
    }
    printf("\n");
}