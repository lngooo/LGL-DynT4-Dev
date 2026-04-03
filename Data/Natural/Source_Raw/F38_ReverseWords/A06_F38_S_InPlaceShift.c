/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A06_F38_S_InPlaceShift.c
 * Implementation Logic: 原地移动法：利用字符平移覆盖实现
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int n = strlen(s);
    char *buf = (char*)malloc(n + 1);
    int cur = 0;
    for(int i = n-1; i >= 0; i--) {
        if(s[i] == ' ') {
            for(int j=i+1; s[j]!=' ' && s[j]!='\0'; j++) buf[cur++] = s[j];
            buf[cur++] = ' ';
        }
    }
    for(int j=0; s[j]!=' ' && s[j]!='\0'; j++) buf[cur++] = s[j];
    buf[cur] = '\0';
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
