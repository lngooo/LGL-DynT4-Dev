int IsPalindrome(char *str) {
    char *end = str;
    while (*end) end++;
    end--;
    while (str < end) {
        if (*str != *end) return 0;
        str++; end--;
    }
    return 1;
}