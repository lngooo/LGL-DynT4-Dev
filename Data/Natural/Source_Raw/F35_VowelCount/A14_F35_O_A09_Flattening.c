/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A14_F35_O_A09_Flattening.c
 * Logic: Switch-case logic with control flow flattening.
 */
#include <stdio.h>
#include <stdlib.h>

int VowelCount(const char* s) {
    int c = 0, i = 0, state = 5;
    while (state != 0) {
        if (state == 5) {
            if (s[i]) state = 3; else state = 0;
        } else if (state == 3) {
            switch (s[i]) {
                case 'a': case 'e': case 'i': case 'o': case 'u':
                case 'A': case 'E': case 'I': case 'O': case 'U':
                    c++; break;
            }
            i++; state = 5;
        }
    }
    return c;
}

int main(int argc, char* argv[]) {
    if (argc < 2) { printf("0\n"); return 0; }
    printf("%d\n", VowelCount(argv[1]));
    return 0;
}