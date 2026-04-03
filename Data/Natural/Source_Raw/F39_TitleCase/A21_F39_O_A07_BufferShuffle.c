/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A21_F39_O_A07_BufferShuffle.c
 * Implementation Logic: A07 with redundant memory allocation and string copying.
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void TitleCase(char* s) {
    int len = strlen(s);
    char* b = malloc(len + 1);
    char* res = malloc(len + 1);
    res[0] = 0;
    strcpy(b, s);
    char* tok = strtok(b, " ");
    while(tok) {
        char word[128];
        strcpy(word, tok);
        word[0] = toupper(word[0]);
        for(int i=1; word[i]; i++) word[i] = tolower(word[i]);
        strcat(res, word);
        tok = strtok(NULL, " ");
        if(tok) strcat(res, " ");
    }
    strcpy(s, res);
    free(b); free(res);
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}