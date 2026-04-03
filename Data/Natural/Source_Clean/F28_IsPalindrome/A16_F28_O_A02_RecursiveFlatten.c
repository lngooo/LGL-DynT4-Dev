int IsPalindrome(char *str) {
    if (!str[0] || !str[1]) return 1;
    int len = 0; while (str[len]) len++;
    int res = (str[0] == str[len-1]);
    if (!res) return 0;
    str[len-1] = '\0';
    return IsPalindrome(str + 1);
}