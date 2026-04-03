void StrCompress(char* s) {
    int n = strlen(s);
    if (n == 0) return;
    int count = 1;
    char last = s[0];
    for (int i = 1; i <= n; i++) {
        if (s[i] == last) {
            count++;
        } else {
            printf("%c%d", last, count);
            last = s[i];
            count = 1;
        }
    }
    printf("\n");
}