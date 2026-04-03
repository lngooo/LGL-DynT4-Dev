int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    int i = -1, j = len;
    while (++i < --j) {
        if (str[i] != str[j]) return 0;
    }
    return 1;
}