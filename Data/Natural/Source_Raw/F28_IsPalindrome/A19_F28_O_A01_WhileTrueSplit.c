/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A19_F28_O_A01_WhileTrueSplit.c
 * Implementation Logic: WhileTrueSplit derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int i = 0;
    int len = 0; while (str[len]) len++;
    int j = len - 1;
    while(1) {
        if(i >= j) break;
        if(str[i] != str[j]) return 0;
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