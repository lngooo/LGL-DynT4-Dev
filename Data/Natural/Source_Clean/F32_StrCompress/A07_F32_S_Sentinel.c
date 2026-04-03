void StrCompress(char* s) {
    int i = 0, j = 0;
    while (s[i]) {
        for (j = i; s[j] == s[i]; j++);
        printf("%c%d", s[i], j - i);
        i = j;
    }
    printf("\n");
}