int IsPalindrome(char *str) {
    char *head = str;
    char *tail = str;
    while (*tail) tail++;
    tail = tail - 1;
    while (head < tail) {
        if (*head - *tail != 0) return 0;
        head++;
        tail--;
    }
    return 1;
}