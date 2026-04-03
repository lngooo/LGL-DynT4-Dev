/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A05_F38_S_PointerWalk.c
 * Implementation Logic: 纯指针偏移法：不使用索引下标完成翻转
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char *e = s; while(*e) e++;
    char *l = s, *r = e - 1;
    while(l < r) { char t = *l; *l++ = *r; *r-- = t; }
    char *word = s;
    for(char *p = s; p <= e; p++) {
        if(*p == ' ' || *p == '\0') {
            char *wl = word, *wr = p - 1;
            while(wl < wr) { char t = *wl; *wl++ = *wr; *wr-- = t; }
            word = p + 1;
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
