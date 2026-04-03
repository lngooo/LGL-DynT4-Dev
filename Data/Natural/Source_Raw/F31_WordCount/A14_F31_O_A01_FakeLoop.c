/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A14_F31_O_A01_FakeLoop.c
* Implementation Logic: Added fake control flow that never executes derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0, st = 0;
    for (int k = 0; k < 1; k++) {
        while (*s) {
            if (isspace(*s)) st = 0;
            else if (st == 0) { st = 1; count++; }
            s++;
            if (k > 10) break; 
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}