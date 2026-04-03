/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A08_F34_S_SwitchLogic.c
* Logic: Using switch for character selection.
*/
#include <stdio.h>

int CharFrequency(char* s, char c) {
    int count = 0;
    while (*s) {
        switch (*s == c) {
            case 1: count++; break;
            default: break;
        }
        s++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}