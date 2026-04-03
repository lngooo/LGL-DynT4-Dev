/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A17_F31_O_A02_DoubleBuffer.c
* Implementation Logic: Copies string twice into buffers before tokenizing derived from A02.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int WordCount(char* s) {
    char b1[512], b2[512];
    memset(b1, 0, 512);
    strncpy(b1, s, 511);
    strcpy(b2, b1);
    int c = 0;
    char* t = strtok(b2, " ");
    while(t) { c++; t = strtok(NULL, " "); }
    return c;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}