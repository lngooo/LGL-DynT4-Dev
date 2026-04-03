int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    for (int i = 0; i < len / 2; i++) {
        int match = (str[i] == str[len - 1 - i]) ? 1 : 0;
        if (!match) return 0;
    }
    return 1;
}