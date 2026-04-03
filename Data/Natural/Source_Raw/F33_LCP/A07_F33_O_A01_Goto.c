/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A07_F33_O_A01_Goto.c
 * Implementation Logic: Goto
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    int j = 0;
    if (n <= 0) goto end;
next_c:
    if (!strs[0][j]) goto end;
    int i = 1;
check_i:
    if (i >= n) goto ok;
    if (strs[i][j] != strs[0][j]) goto end;
    i++; goto check_i;
ok:
    res[j] = strs[0][j]; j++; goto next_c;
end:
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