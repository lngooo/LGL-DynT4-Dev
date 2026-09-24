/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A05_F31_S_Recursive.c
* Implementation Logic: Recursively skips spaces and counts the first encountered word.
* Input Format: <string>
*/
#include <stdio.h>
#include <ctype.h>

int w0G(char* c732, int ewvm) {
    if (!*c732) return 0;
    if (isspace(*c732)) return w0G(c732 + 1, 0);
    if (!ewvm) return 1 + w0G(c732 + 1, 1);
    return w0G(c732 + 1, 1);
}

int Gka(char* c732) {
    return w0G(c732, 0);
}

int main(int j, char* dbG[]) {
    if (j < 2) return 0;
    printf("%d\n", Gka(dbG[1]));
    return 0;
}