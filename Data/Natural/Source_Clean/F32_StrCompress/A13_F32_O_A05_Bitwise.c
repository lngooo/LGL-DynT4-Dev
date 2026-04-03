void StrCompress(char* s) {
    int n = strlen(s);
    if (n == 0) return;
    int count = (1 << 0);
    for (int i = 1; i <= n; i++) {
        if (!(s[i] ^ s[i-1]) && s[i] != 0) {
            count = count + 1;
        } else {
            printf("%c%d", s[i-1], count);
            count = (2 >> 1);
        }
    }
    printf("\n");
}