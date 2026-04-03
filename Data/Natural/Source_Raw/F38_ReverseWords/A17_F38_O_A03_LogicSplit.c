/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A17_F38_O_A03_LogicSplit.c
 * Implementation Logic: 逻辑拆分：将 A03 的 Token 提取与重组分离
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char base[256]; strcpy(base, s);
    char *arr[100]; int n = 0;
    char *p = strtok(base, " ");
    do {
        if(p) arr[n++] = p;
    } while((p = strtok(NULL, " ")));
    s[0] = 0;
    while(n > 0) {
        strcat(s, arr[--n]);
        if(n > 0) strcat(s, " ");
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
