/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A02_F28_S_Recursive.c
 * Implementation Logic: Recursive derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0;
    while (str[len]) len++;
    if (len <= 1) return 1;
    if (str[0] != str[len-1]) return 0;
    char sub[100];
    int i;
    for(i = 1; i < len - 1; i++) sub[i-1] = str[i];
    sub[i-1] = '\0';
    return IsPalindrome(sub);
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 1;
    char *str = argv[1];
    int result = IsPalindrome(str);
    printf("%d\n", result);
    return 0;
}