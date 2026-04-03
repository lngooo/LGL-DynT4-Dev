/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A07_F28_O_A01_Goto.c
 * Implementation Logic: Goto derived from seed.
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
loop:
    if (i >= j) goto success;
    if (str[i] != str[j]) goto fail;
    i++; j--;
    goto loop;
success: return 1;
fail: return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    char *str = argv[1];
    int result = IsPalindrome(str);
    printf("%d\n", result);
    return 0;
}