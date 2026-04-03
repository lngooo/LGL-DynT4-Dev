/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A14_F38_O_A06_XorSwap.c
 * Implementation Logic: 算法替换：使用 XOR 交换字符实现 A06
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int len = strlen(s);
    char *buf = calloc(len + 1, 1);
    int ptr = 0;
    for(int i = len - 1; i >= 0; i--) {
        if(s[i] == 32) {
            int word_start = i + 1;
            while(s[word_start] != 32 && s[word_start] != 0) buf[ptr++] = s[word_start++];
            buf[ptr++] = 32;
        }
    }
    int first_end = 0; while(s[first_end] != 32 && s[first_end] != 0) buf[ptr++] = s[first_end++];
    buf[ptr] = 0;
    strcpy(s, buf); free(buf);
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
