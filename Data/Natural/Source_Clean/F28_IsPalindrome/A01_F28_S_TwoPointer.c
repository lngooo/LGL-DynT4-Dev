int IsPalindrome(char *str) {
    int len = 0;
    while (str[len]) len++;
    int i = 0, j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}