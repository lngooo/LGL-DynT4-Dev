/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A17_F28_O_A04_RedundantLogic.c
 * Implementation Logic: RedundantLogic derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    char *str = argv[1];
    int result = IsPalindrome(str);
    printf("%d\n", result);
    return 0;
}