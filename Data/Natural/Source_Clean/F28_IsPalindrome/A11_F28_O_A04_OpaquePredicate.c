int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    char s[100];
    for (int i = 0; i < len; i++) {
        if ((i * i + i) % 2 == 0) s[i] = str[i];
    }
    for (int i = 0; i < len; i++) {
        if (str[i] != s[len - 1 - i]) return 0;
    }
    return 1;
}