void StrCompress(char* s) {
    int i = 0;
    while (1) {
        if (!s[i]) break;
        int j = i;
        while (s[j] && s[j] == s[i]) j++;
        printf("%c%d", s[i], j - i);
        i = j;
    }
    printf("\n");
}