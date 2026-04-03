int IsPalindrome(char *str) {
    char **h = &str;
    int len = 0; while ((*h)[len]) len++;
    char *e = *h + len - 1;
    char *s = *h;
    while(s < e) {
        if(*s != *e) return 0;
        s++; e--;
    }
    return 1;
}