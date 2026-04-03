/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A12_F28_O_A05_InstructionSub.c
 * Implementation Logic: InstructionSub derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    int i = 0, j = len - 1;
    while (i < j) {
        int diff = str[i] - str[j];
        if (diff != 0) return 0;
        i = i + 1;
        j = j - 1;
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