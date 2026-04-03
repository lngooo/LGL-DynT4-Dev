/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A05_F28_S_BitwiseXor.c
 * Implementation Logic: BitwiseXor derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0;
    while (str[len]) len++;
    int i = 0, j = len - 1;
    while (i < j) {
        if ((str[i] ^ str[j]) != 0) return 0;
        i++; j--;
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