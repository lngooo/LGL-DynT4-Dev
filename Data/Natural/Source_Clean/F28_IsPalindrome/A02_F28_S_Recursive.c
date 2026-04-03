int IsPalindrome(char *str) {
    int len = 0;
    while (str[len]) len++;
    if (len <= 1) return 1;
    if (str[0] != str[len-1]) return 0;
    char sub[100];
    int i;
    for(i = 1; i < len - 1; i++) sub[i-1] = str[i];
    sub[i-1] = '\0';
    return IsPalindrome(sub);
}