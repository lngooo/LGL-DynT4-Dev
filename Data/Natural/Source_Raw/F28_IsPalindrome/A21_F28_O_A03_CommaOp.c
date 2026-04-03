/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A21_F28_O_A03_CommaOp.c
 * Implementation Logic: CommaOp derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (i++, i--, str[i] != str[j]) return 0;
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