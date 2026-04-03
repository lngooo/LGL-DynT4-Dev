int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    for(int i = 0; i < len/2; i++) {
        double d = (double)str[i] - (double)str[len-1-i];
        if ((int)floor(d * d) != 0) return 0;
    }
    return 1;
}