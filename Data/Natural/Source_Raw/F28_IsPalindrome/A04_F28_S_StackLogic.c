/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A04_F28_S_StackLogic.c
 * Implementation Logic: StackLogic derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    char *str = argv[1];
    int result = IsPalindrome(str);
    printf("%d\n", result);
    return 0;
}