/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A18_F38_O_A04_StructSim.c
 * Implementation Logic: 数据结构化：使用结构体封装单词索引模拟 A04
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    struct Word { int start; int len; } words[64];
    int count = 0, n = strlen(s), last = 0;
    for(int i=0; i<=n; i++) {
        if(s[i] == ' ' || s[i] == 0) {
            words[count].start = last;
            words[count++].len = i - last;
            last = i + 1;
        }
    }
    char buf[256] = "";
    for(int j=count-1; j>=0; j--) {
        strncat(buf, s + words[j].start, words[j].len);
        if(j > 0) strcat(buf, " ");
    }
    strcpy(s, buf);
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
