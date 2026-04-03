int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (i++, i--, str[i] != str[j]) return 0;
    }
    return 1;
}