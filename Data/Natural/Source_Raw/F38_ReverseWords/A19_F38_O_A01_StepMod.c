/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A19_F38_O_A01_StepMod.c
 * Implementation Logic: 循环步长混淆：修改 A01 的翻转步长逻辑
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int n = 0; while(s[n]) n++;
    for(int i=0; i < n/2; i+=1) {
        char t = s[i]; s[i] = s[n-1-i]; s[n-1-i] = t;
    }
    int cur = 0;
    while(cur < n) {
        int next = cur;
        while(s[next] != ' ' && s[next] != 0) next++;
        for(int k=0; k < (next-cur)/2; k++) {
            char tmp = s[cur+k];
            s[cur+k] = s[next-1-k];
            s[next-1-k] = tmp;
        }
        cur = next + 1;
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
