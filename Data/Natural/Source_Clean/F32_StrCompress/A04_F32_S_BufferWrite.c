void StrCompress(char* s) {
    char buf[1024] = {0};
    int n = strlen(s), count = 1, pos = 0;
    if (n == 0) return;
    for (int i = 0; i < n; i++) {
        if (i + 1 < n && s[i] == s[i+1]) {
            count++;
        } else {
            pos += sprintf(buf + pos, "%c%d", s[i], count);
            count = 1;
        }
    }
    printf("%s\n", buf);
}