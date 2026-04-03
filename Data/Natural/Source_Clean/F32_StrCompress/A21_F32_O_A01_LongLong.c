void StrCompress(char* s) {
    long long n = (long long)strlen(s);
    for (long long i = 0; i < n; i++) {
        long long c = 1;
        while (i + 1 < n && s[i] == s[i + 1]) {
            c++;
            i++;
        }
        printf("%c%lld", s[i], c);
    }
    printf("\n");
}