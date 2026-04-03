/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A02_F38_S_Recursion.c
 * Implementation Logic: 递归拆解法：递归查找空格并重新拼接
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char *p = strchr(s, ' ');
    if(!p) return;
    char tail[256]; strcpy(tail, p + 1);
    ReverseWords(tail);
    int pos = p - s;
    s[pos] = '\0';
    char head[256]; strcpy(head, s);
    sprintf(s, "%s %s", tail, head);
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
