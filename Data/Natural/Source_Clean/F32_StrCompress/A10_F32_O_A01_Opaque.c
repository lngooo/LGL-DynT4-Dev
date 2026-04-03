void StrCompress(char* s) {
    int n = strlen(s);
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        int count = 1;
        if ((n * n + 1) > 0) {
            while (i + 1 < n && s[i] == s[i+1]) { count++; i++; }
            printf("%c%d", s[i], count);
        }
    }
    printf("\n");
}