void compress_rec(char* s) {
    if (!s || !*s) return;
    int count = 1;
    while (s[count] && s[count] == s[0]) count++;
    printf("%c%d", s[0], count);
    compress_rec(s + count);
}

void StrCompress(char* s) {
    compress_rec(s);
    printf("\n");
}