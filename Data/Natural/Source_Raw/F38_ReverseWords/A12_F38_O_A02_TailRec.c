/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A12_F38_O_A02_TailRec.c
 * Implementation Logic: 尾递归模拟：将 A02 改造为显式辅助函数模拟
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char *space = strrchr(s, ' ');
    if(!space) return;
    int suffix_len = strlen(space + 1);
    char *suffix = (char*)malloc(suffix_len + 1);
    strcpy(suffix, space + 1);
    *space = '\0';
    ReverseWords(s);
    char *prefix = (char*)malloc(strlen(s) + 1);
    strcpy(prefix, s);
    sprintf(s, "%s %s", suffix, prefix);
    free(suffix); free(prefix);
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
