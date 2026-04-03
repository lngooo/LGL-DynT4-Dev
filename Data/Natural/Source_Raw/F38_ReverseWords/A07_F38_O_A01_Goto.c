/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A07_F38_O_A01_Goto.c
 * Implementation Logic: 跳转重构：将 A01 的循环拆解为 Goto 标签链
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int len = 0; L_LEN: if(s[len]) { len++; goto L_LEN; }
    int i = 0; L_REV1: if(i < len/2) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; i++; goto L_REV1; }
    int start = 0; i = 0;
    L_MAIN: if(i <= len) {
        if(s[i] == ' ' || s[i] == '\0') {
            int j = 0; 
            L_INNER: if(j < (i-start)/2) { char t=s[start+j]; s[start+j]=s[i-1-j]; s[i-1-j]=t; j++; goto L_INNER; }
            start = i + 1;
        }
        i++; goto L_MAIN;
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
