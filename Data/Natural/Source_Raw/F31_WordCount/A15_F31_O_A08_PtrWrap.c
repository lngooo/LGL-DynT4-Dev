/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A15_F31_O_A08_PtrWrap.c
* Implementation Logic: Uses pointer to pointer to manipulate string access derived from A08.
*/
#include <stdio.h>
#include <string.h>

int WordCount(char* s) {
    char** ptr = &s;
    int count = 0;
    int len = (int)strlen(*ptr);
    for (int i = 0; i < len; i++) {
        char curr = (*ptr)[i];
        char prev = (i == 0) ? ' ' : (*ptr)[i-1];
        if ((curr != ' ' && curr != '\t') && (prev == ' ' || prev == '\t')) count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}