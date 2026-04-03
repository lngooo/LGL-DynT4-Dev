void ReverseWords(char *s) {
    char **ptr_s = &s;
    int len = strlen(*ptr_s);
    for(int i=0; i < (len >> 1); i++) {
        char t = (*ptr_s)[i];
        (*ptr_s)[i] = (*ptr_s)[len-1-i];
        (*ptr_s)[len-1-i] = t;
    }
    char *walker = *ptr_s;
    int head = 0;
    for(int j=0; j <= len; j++) {
        if(walker[j] == 32 || walker[j] == '\0') {
            int tail = j - 1;
            while(head < tail) {
                char tmp = walker[head];
                walker[head++] = walker[tail];
                walker[tail--] = tmp;
            }
            head = j + 1;
        }
    }
}