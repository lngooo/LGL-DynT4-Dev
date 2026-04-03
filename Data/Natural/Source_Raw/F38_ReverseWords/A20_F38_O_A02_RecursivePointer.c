/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A20_F38_O_A02_RecursivePointer.c
 * Implementation Logic: 递归指针偏移：基于 A02 的指针版递归
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ReverseWords(char *s) {
    char *space = strchr(s, ' ');
    if (space) {
        char temp[256];
        strcpy(temp, space + 1);
        ReverseWords(temp);
        int len = space - s;
        char first[256]; strncpy(first, s, len); first[len] = '\0';
        sprintf(s, "%s %s", temp, first);
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
