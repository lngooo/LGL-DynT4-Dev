/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A20_F34_O_A04_WhileTrue.c
* Logic: while(1) loop with manual break and pointer casting derived from A04.
*/
#include <stdio.h>
#include <string.h>

int CharFrequency(char* s, char c) {
    int res = 0;
    char* cur = s;
    while (1) {
        cur = strchr(cur, c);
        if (cur == NULL) break;
        res++;
        cur++;
    }
    return res;
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", CharFrequency(argv[1], argv[2][0]));
    return 0;
}