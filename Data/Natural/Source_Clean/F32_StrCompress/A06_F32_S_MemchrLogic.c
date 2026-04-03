void StrCompress(char* s) {
    while (*s) {
        char target = *s;
        int count = 0;
        char *next = s;
        while (*next && *next == target) {
            count++;
            next++;
        }
        printf("%c%d", target, count);
        s = next;
    }
    printf("\n");
}