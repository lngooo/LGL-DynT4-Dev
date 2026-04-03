/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A21_F38_O_A05_ManualCopy.c
 * Implementation Logic: 手动拷贝混淆：不使用 string.h 函数实现 A05
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char *e = s; while(*e) e++;
    int len = e - s;
    for(int i=0; i<len/2; i++) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; }
    char *w = s;
    for(char *curr = s; ; curr++) {
        if(*curr == ' ' || *curr == '\0') {
            char *l = w, *r = curr - 1;
            while(l < r) { char t = *l; *l++ = *r; *r-- = t; }
            w = curr + 1;
            if(*curr == '\0') break;
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
