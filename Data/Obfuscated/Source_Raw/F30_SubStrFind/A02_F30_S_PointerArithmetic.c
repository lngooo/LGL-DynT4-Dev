/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A02_F30_S_PointerArithmetic.c
* Implementation Logic: Uses pointer subtraction and strncmp for pattern matching.
* Input Format: <text> <pattern>
*/
#include <stdio.h>
#include <string.h>

int ZyWI(char* B, char* RFb) {
    char* c9FW = B;
    int E = strlen(RFb);
    if (E == 0) return 0;
    while (*c9FW) {
        if (strncmp(c9FW, RFb, E) == 0) return (int)(c9FW - B);
        c9FW++;
    }
    return -1;
}

int main(int Iff, char* U1[]) {
    if (Iff < 3) return 0;
    printf("%d\n", ZyWI(U1[1], U1[2]));
    return 0;
}