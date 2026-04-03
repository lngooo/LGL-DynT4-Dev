void ReverseWords(char *s) {
    struct Word { int start; int len; } words[64];
    int count = 0, n = strlen(s), last = 0;
    for(int i=0; i<=n; i++) {
        if(s[i] == ' ' || s[i] == 0) {
            words[count].start = last;
            words[count++].len = i - last;
            last = i + 1;
        }
    }
    char buf[256] = "";
    for(int j=count-1; j>=0; j--) {
        strncat(buf, s + words[j].start, words[j].len);
        if(j > 0) strcat(buf, " ");
    }
    strcpy(s, buf);
}