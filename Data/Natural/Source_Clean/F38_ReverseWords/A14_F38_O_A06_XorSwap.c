void ReverseWords(char *s) {
    int len = strlen(s);
    char *buf = calloc(len + 1, 1);
    int ptr = 0;
    for(int i = len - 1; i >= 0; i--) {
        if(s[i] == 32) {
            int word_start = i + 1;
            while(s[word_start] != 32 && s[word_start] != 0) buf[ptr++] = s[word_start++];
            buf[ptr++] = 32;
        }
    }
    int first_end = 0; while(s[first_end] != 32 && s[first_end] != 0) buf[ptr++] = s[first_end++];
    buf[ptr] = 0;
    strcpy(s, buf); free(buf);
}