int WordCount(char* s) {
    int n = (int)strlen(s);
    if (n == 0) return 0;
    int spaces[1024], c = 0;
    for(int i=0; i<n; i++) spaces[i] = (s[i]==' '||s[i]=='\t');
    for(int i=0; i<n; i++) if(!spaces[i] && (i==0 || spaces[i-1])) c++;
    return c;
}