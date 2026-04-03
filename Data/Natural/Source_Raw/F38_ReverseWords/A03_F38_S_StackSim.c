/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A03_F38_S_StackSim.c
 * Implementation Logic: 数组模拟栈：利用单词指针数组逆序重组
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char *words[128]; int count = 0;
    char temp[256]; strcpy(temp, s);
    char *tok = strtok(temp, " ");
    while(tok) { words[count++] = tok; tok = strtok(NULL, " "); }
    s[0] = '\0';
    for(int i=count-1; i>=0; i--) {
        strcat(s, words[i]);
        if(i > 0) strcat(s, " ");
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
