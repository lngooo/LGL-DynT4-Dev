int IsPalindrome(char *str) {
    int len = 0;
    while (str[len]) len++;
    char stack[100];
    for (int i = 0; i < len; i++) stack[i] = str[i];
    for (int i = 0; i < len; i++) {
        if (str[i] != stack[len - 1 - i]) return 0;
    }
    return 1;
}