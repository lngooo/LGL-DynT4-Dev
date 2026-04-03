int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    char stack[100];
    int top = 0;
    while(top < len) { stack[top] = str[top]; top++; }
    top--;
    for(int i = 0; i < len; i++) {
        if(stack[top--] != str[i]) return 0;
    }
    return 1;
}