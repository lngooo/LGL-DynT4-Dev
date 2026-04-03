void StrCompress(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        int c = 1;
        int noise = i * 2;
        while (i + 1 < n && s[i] == s[i+1]) {
            c++; i++;
            noise += c;
        }
        if (noise > -100) printf("%c%d", s[i], c);
    }
    printf("\n");
}