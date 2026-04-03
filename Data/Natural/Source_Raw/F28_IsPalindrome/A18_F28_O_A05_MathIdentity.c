/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A18_F28_O_A05_MathIdentity.c
 * Implementation Logic: MathIdentity derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int IsPalindrome(char *str) {
    int len = 0; while (str[len]) len++;
    for(int i = 0; i < len/2; i++) {
        double d = (double)str[i] - (double)str[len-1-i];
        if ((int)floor(d * d) != 0) return 0;
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