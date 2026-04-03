void ReverseWords(char *s) {
    int len = strlen(s);
    for(int i=0; i<len/2; i++) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; }
    int start = 0;
    for(int i=0; i<=len; i++) {
        if(s[i] == ' ' || s[i] == '\0') {
            for(int j=0; j<(i-start)/2; j++) { char t=s[start+j]; s[start+j]=s[i-1-j]; s[i-1-j]=t; }
            start = i + 1;
        }
    }
}