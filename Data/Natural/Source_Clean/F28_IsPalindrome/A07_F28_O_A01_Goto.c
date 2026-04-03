int IsPalindrome(char *str) {
    int len = 0;
    while (str[len]) len++;
    int i = 0, j = len - 1;
loop:
    if (i >= j) goto success;
    if (str[i] != str[j]) goto fail;
    i++; j--;
    goto loop;
success: return 1;
fail: return 0;
}