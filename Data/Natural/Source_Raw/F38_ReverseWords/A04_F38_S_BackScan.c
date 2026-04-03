/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A04_F38_S_BackScan.c
 * Implementation Logic: 后向扫描法：从末尾向前查找单词并拷贝至缓冲区
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    int n = strlen(s); char res[256] = "";
    int end = n;
    for(int i=n-1; i>=-1; i--) {
        if(i == -1 || s[i] == ' ') {
            strncat(res, s + i + 1, end - i - 1);
            if(i != -1) strcat(res, " ");
            end = i;
        }
    }
    strcpy(s, res);
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
