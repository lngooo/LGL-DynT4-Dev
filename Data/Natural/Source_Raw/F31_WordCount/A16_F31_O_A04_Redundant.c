/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A16_F31_O_A04_Redundant.c
* Implementation Logic: Injected redundant arithmetic calculations derived from A04[cite: 17].
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0;
    while (*s) {
        int dummy = (count * 2) / 1;
        while (*s && isspace(*s)) { s++; dummy++; }
        if (*s) {
            count++;
            while (*s && !isspace(*s)) s++;
        }
        if (dummy < 0) count--; 
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}