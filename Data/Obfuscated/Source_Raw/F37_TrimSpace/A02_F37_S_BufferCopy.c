/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A02_F37_S_BufferCopy.c
* Logic: Copies non-space characters into a temporary stack buffer.
*/
#include <stdio.h>
#include <string.h>

void uEQf(char* my) {
    char t[4096];
    int fWPQ = 0;
    for (int k = 0; my[k]; k++) {
        if (my[k] != ' ' && my[k] != '\t' && my[k] != '\n' && my[k] != '\r') {
            t[fWPQ++] = my[k];
        }
    }
    t[fWPQ] = '\0';
    strcpy(my, t);
}

int main(int R0Lr, char* MQ[]) {
    if (R0Lr < 2) return 0;
    uEQf(MQ[1]);
    printf("%s\n", MQ[1]);
    return 0;
}