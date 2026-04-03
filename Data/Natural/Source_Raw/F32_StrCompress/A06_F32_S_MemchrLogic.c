/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A06_F32_S_MemchrLogic.c
* Implementation Logic: Uses a while loop to jump to the next different character.
*/
#include <stdio.h>
#include <string.h>

void StrCompress(char* s) {
    while (*s) {
        char target = *s;
        int count = 0;
        char *next = s;
        while (*next && *next == target) {
            count++;
            next++;
        }
        printf("%c%d", target, count);
        s = next;
    }
    printf("\n");
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    StrCompress(argv[1]);
    return 0;
}