/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A07_F39_S_Strtok.c
 * Implementation Logic: Uses strtok to isolate words, titlecase them, and reassemble.
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void TitleCase(char* s) {
    char buf[1024];
    strcpy(buf, s);
    char* t = strtok(buf, " ");
    s[0] = '\0';
    while (t) {
        t[0] = toupper(t[0]);
        for(int j=1; t[j]; j++) t[j] = tolower(t[j]);
        strcat(s, t);
        t = strtok(NULL, " ");
        if (t) strcat(s, " ");
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    TitleCase(argv[1]);
    printf("%s", argv[1]);
    return 0;
}