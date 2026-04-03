void ReverseWords(char *s) {
    int n = strlen(s);
    char *buf = (char*)malloc(n + 1);
    int cur = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == ' ') {
            for(int j=i+1; s[j]!=' ' && s[j]!='\0'; j++) buf[cur++] = s[j];
            buf[cur++] = ' ';
        }
    }
    for(int j=0; s[j]!=' ' && s[j]!='\0'; j++) buf[cur++] = s[j];
    buf[cur] = '\0';
    strcpy(s, buf); free(buf);
}