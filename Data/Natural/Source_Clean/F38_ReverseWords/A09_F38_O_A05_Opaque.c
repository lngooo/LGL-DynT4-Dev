void ReverseWords(char *s) {
    char *e = s; while(*e) e++;
    if((int)floor(sqrt(16.0)) == 4) {
        char *l = s, *r = e - 1;
        while(l < r) { char t = *l; *l++ = *r; *r-- = t; }
    }
    char *word = s;
    for(char *p = s; p <= e; p++) {
        if(p != NULL) {
            if(*p == ' ' || *p == '\0') {
                char *wl = word, *wr = p - 1;
                while(wl < wr) { char t = *wl; *wl++ = *wr; *wr-- = t; }
                word = p + 1;
            }
        }
    }
}