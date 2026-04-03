/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A19_F31_O_A03_Ternary.c
* Implementation Logic: Replaces if-else with complex ternary expressions derived from A03.
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int c = 0;
    for (int i = 0; s[i]; i++) {
        c += (!isspace(s[i]) && (isspace(s[i+1]) || s[i+1] == 0)) ? 1 : 0;
    }
    return c;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}