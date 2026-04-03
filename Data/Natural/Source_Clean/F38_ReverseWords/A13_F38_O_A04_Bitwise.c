void ReverseWords(char *s) {
    int n = strlen(s); char out[256]; memset(out, 0, 256);
    int last = n;
    for(int i = n - 1; i >= -1; i--) {
        int is_space = (i >= 0) ? (s[i] ^ ' ') : -1;
        if(is_space == 0 || i == -1) {
            strncat(out, s + i + 1, last - i - 1);
            if(i != -1) { char sp[2] = {32, 0}; strcat(out, sp); }
            last = i;
        }
    }
    strcpy(s, out);
}