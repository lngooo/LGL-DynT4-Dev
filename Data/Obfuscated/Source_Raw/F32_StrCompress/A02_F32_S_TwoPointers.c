/**
* LGL-DynT4 Dataset - Function: StrCompress
* -----------------------------------------
* File: A02_F32_S_TwoPointers.c
* Implementation Logic: Classic two-pointer approach (anchor and explorer).
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>

void XMQ(char* F) {
    char *IQ = F, *Xh2 = F;
    while (*IQ) {
        Xh2 = IQ;
        while (*Xh2 == *IQ) Xh2++;
        printf("%c%ld", *IQ, (long)(Xh2 - IQ));
        IQ = Xh2;
    }
    printf("\n");
}

int main(int yJ, char* lIP[]) {
    if (yJ < 2) return 0;
    XMQ(lIP[1]);
    return 0;
}