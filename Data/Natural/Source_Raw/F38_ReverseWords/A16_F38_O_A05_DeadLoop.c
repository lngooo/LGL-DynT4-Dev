/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A16_F38_O_A05_DeadLoop.c
 * Implementation Logic: 虚假控制流：在 A05 内部嵌入永不执行的死循环
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char *end_ptr = s; while(*end_ptr) end_ptr++;
    char *a = s, *b = end_ptr - 1;
    while(a < b) { char t = *a; *a++ = *b; *b-- = t; }
    if(0) { for(int k=0; k<100; k++) printf("Unreachable"); }
    char *word_ptr = s;
    for(char *run = s; run <= end_ptr; run++) {
        if(*run == 32 || *run == 0) {
            char *sub_l = word_ptr, *sub_r = run - 1;
            while(sub_l < sub_r) { char tmp = *sub_l; *sub_l++ = *sub_r; *sub_r-- = tmp; }
            word_ptr = run + 1;
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
