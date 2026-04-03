/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A09_F31_O_A01_Flattening.c
* Implementation Logic: Control flow flattening using switch-case derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

int WordCount(char* s) {
    int count = 0, state = 0, sw_state = 0;
    while (sw_state != -1) {
        switch (sw_state) {
            case 0: if (!*s) sw_state = -1; else sw_state = 1; break;
            case 1: if (isspace(*s)) state = 0; else if (state == 0) { state = 1; count++; }
                    s++; sw_state = 0; break;
        }
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    printf("%d\n", WordCount(argv[1]));
    return 0;
}