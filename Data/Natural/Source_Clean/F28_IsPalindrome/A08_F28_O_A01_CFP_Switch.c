int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    int i = 0, j = len - 1, state = 0;
    while (state != 3) {
        switch(state) {
            case 0: state = (i < j) ? 1 : 2; break;
            case 1: if (str[i] != str[j]) return 0; i++; j--; state = 0; break;
            case 2: return 1;
        }
    }
    return 1;
}