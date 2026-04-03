/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A16_F28_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    if (!str[0] || !str[1]) return 1;
    int len = 0; while (str[len]) len++;
    int res = (str[0] == str[len-1]);
    if (!res) return 0;
    str[len-1] = '\0';
    return IsPalindrome(str + 1);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    char *str = argv[1];
    int result = IsPalindrome(str);
    printf("%d\n", result);
    return 0;
}