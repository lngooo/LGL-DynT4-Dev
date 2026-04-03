/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A10_F28_O_A03_VarSplit.c
 * Implementation Logic: VarSplit derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    int half = len >> 1;
    for (int i = 0; i < half; i++) {
        int left_idx = i;
        int right_idx = (len - 1) - left_idx;
        char a = str[left_idx];
        char b = str[right_idx];
        if (a != b) return 0;
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