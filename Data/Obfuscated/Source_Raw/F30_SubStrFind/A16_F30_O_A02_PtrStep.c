/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A16_F30_O_A02_PtrStep.c
* Implementation Logic: Changes pointer increment logic derived from A02.
*/
#include <stdio.h>
#include <string.h>

int BY4H(char* ubF, char* CMnx) {
    int Te = strlen(CMnx);
    if (Te == 0) return 0;
    for (char* kYzn = ubF; *kYzn; kYzn = kYzn + 1) {
        int uw = 1;
        for(int rpTs=0; rpTs<Te; rpTs++) if(*(kYzn+rpTs) != *(CMnx+rpTs)) uw = 0;
        if (uw) return (int)(kYzn - ubF);
    }
    return -1;
}

int main(int yM, char* bR7K[]) {
    if (yM < 3) return 0;
    printf("%d\n", BY4H(bR7K[1], bR7K[2]));
    return 0;
}