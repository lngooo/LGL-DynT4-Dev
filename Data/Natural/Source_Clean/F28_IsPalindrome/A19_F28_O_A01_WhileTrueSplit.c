int IsPalindrome(char *str) {
    int i = 0;
    int len = 0; while (str[len]) len++;
    int j = len - 1;
    while(1) {
        if(i >= j) break;
        if(str[i] != str[j]) return 0;
        i++; j--;
    }
    return 1;
}