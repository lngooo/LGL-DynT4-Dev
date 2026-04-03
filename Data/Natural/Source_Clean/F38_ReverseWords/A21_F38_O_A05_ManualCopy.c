void ReverseWords(char *s) {
    char *e = s; while(*e) e++;
    int len = e - s;
    for(int i=0; i<len/2; i++) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; }
    char *w = s;
    for(char *curr = s; ; curr++) {
        if(*curr == ' ' || *curr == '\0') {
            char *l = w, *r = curr - 1;
            while(l < r) { char t = *l; *l++ = *r; *r-- = t; }
            w = curr + 1;
            if(*curr == '\0') break;
        }
    }
}