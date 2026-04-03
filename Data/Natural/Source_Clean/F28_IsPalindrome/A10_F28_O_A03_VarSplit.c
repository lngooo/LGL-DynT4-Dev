int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    int half = len >> 1;
    for (int i = 0; i < half; i++) {
        int left_idx = i;
        int right_idx = (len - 1) - left_idx;
        char a = str[left_idx];
        char b = str[right_idx];
        if (a != b) return 0;
    }
    return 1;
}