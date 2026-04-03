void tr(char* s, int i) {
    if (!s[i]) return;
    int k = 1;
    while (s[i+k] == s[i]) k++;
    printf("%c%d", s[i], k);
    tr(s, i + k);
}

void StrCompress(char* s) {
    tr(s, 0);
    printf("\n");
}