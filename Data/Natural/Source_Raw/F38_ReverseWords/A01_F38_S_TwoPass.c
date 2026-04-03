/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A01_F38_S_TwoPass.c
 * Implementation Logic: 双指针翻转法：先翻转整串，再翻转每个单词
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int len = strlen(s);
    for(int i=0; i<len/2; i++) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; }
    int start = 0;
    for(int i=0; i<=len; i++) {
        if(s[i] == ' ' || s[i] == '\0') {
            for(int j=0; j<(i-start)/2; j++) { char t=s[start+j]; s[start+j]=s[i-1-j]; s[i-1-j]=t; }
            start = i + 1;
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
