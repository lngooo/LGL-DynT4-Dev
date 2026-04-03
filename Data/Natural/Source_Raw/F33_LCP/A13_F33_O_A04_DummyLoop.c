/**
 * LGL-DynT4 Dataset - Function: LCP
 * -----------------------------------------
 * File: A13_F33_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <str1> <str2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void LCP(char **strs, int n, char *res) {
    int ml = 0; while(strs[0][ml]) ml++;
    for(int i=0; i<ml; i++) {
        int flag = 1;
        for(int d=0; d<1; d++) {
            for(int k=1; k<n; k++) if(strs[k][i] != strs[0][i]) flag = 0;
        }
        if(flag) res[i] = strs[0][i]; else { res[i] = 0; return; }
    }
    res[ml] = 0;
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