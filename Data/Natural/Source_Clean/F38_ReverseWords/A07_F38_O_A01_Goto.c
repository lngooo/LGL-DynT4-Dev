void ReverseWords(char *s) {
    int len = 0; L_LEN: if(s[len]) { len++; goto L_LEN; }
    int i = 0; L_REV1: if(i < len/2) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; i++; goto L_REV1; }
    int start = 0; i = 0;
    L_MAIN: if(i <= len) {
        if(s[i] == ' ' || s[i] == '\0') {
            int j = 0; 
            L_INNER: if(j < (i-start)/2) { char t=s[start+j]; s[start+j]=s[i-1-j]; s[i-1-j]=t; j++; goto L_INNER; }
            start = i + 1;
        }
        i++; goto L_MAIN;
    }
}