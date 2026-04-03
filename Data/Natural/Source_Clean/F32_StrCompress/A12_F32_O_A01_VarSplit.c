void StrCompress(char* s) {
    int n = strlen(s);
    int i_lo = 0, i_hi = 0;
    while ((i_lo + i_hi) < n) {
        int count = 1, cur = i_lo + i_hi;
        while (cur + 1 < n && s[cur] == s[cur + 1]) { count++; cur++; }
        printf("%c%d", s[cur], count);
        int diff = (cur + 1) - (i_lo + i_hi);
        i_lo += diff;
    }
    printf("\n");
}