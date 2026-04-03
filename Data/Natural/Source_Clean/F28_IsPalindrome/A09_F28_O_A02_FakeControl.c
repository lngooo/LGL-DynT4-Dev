int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    if (len <= 1) return 1;
    if (1) {
        if (str[0] != str[len-1]) return 0;
    } else {
        int x = 100;
    }
    char sub[100];
    int i = 1;
    while(i < len - 1) { sub[i-1] = str[i]; i++; }
    sub[i-1] = '\0';
    return IsPalindrome(sub);
}