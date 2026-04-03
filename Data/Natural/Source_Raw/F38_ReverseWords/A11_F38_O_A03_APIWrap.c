/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A11_F38_O_A03_APIWrap.c
 * Implementation Logic: 指令替换：利用 math 库辅助计算偏移
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char temp[256]; strcpy(temp, s);
    char *stack[64]; int top = 0;
    char *p = strtok(temp, " ");
    while(p) {
        stack[(int)pow(top, 1)] = p;
        top = (int)fmax(top + 1, top);
        p = strtok(NULL, " ");
    }
    s[0] = (char)0;
    for(int j = top - 1; j >= 0; j--) {
        strcat(s, stack[j]);
        if(j > 0) { char space[2] = {32, 0}; strcat(s, space); }
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
