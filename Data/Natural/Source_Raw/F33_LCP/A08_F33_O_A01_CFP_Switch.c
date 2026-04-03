/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A08_F33_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    int state = 0, j = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (n > 0 && strs[0][j]) ? 1 : 3; break;
            case 1: {
                int i = 1;
                while (i < n && strs[i][j] == strs[0][j]) i++;
                if (i == n) { res[j] = strs[0][j]; j++; state = 0; }
                else state = 3;
                break;
            }
        }
    }
    res[j] = '\0';
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    int num_strs = argc - 1;
    char **strs = &argv[1];
    char result[128] = {0};
    LCP(strs, num_strs, result);
    printf("%s\n", result);
    return 0;
}