/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A10_F38_O_A01_VarSplit.c
 * Implementation Logic: 数据流混淆：对 A01 变量进行拆分与冗余化
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int v1 = 0, v2 = 0; while(s[v1+v2]) v1++;
    int total = v1 + v2;
    for(int i=0; i < (total >> 1); i++) {
        char t = s[i];
        int target = total - 1 - i;
        s[i] = s[target];
        s[target] = t;
    }
    int st_idx = 0;
    for(int k=0; k <= total; k++) {
        if((s[k] ^ 32) == 0 || s[k] == 0) {
            int mid = (k - st_idx) / 2;
            for(int m=0; m < mid; m++) {
                char tmp = s[st_idx + m];
                s[st_idx + m] = s[k - 1 - m];
                s[k - 1 - m] = tmp;
            }
            st_idx = k + 1;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) return 0;
    char buffer[512] = "";
    for(int i = 1; i < argc; i++) {
        strcat(buffer, argv[i]);
        if(i < argc - 1) strcat(buffer, " ");
    }
    ReverseWords(buffer);
    printf("%s\n", buffer);
    return 0;
}
