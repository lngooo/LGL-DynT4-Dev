int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    int i = 0, j = len - 1;
    while (i < j) {
        int diff = str[i] - str[j];
        if (diff != 0) return 0;
        i = i + 1;
        j = j - 1;
    }
    return 1;
}