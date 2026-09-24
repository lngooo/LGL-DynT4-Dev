/**
* LGL-DynT4 Dataset - Function: WordCount
* -----------------------------------------
* File: A08_F31_S_MemchrSim.c
* Implementation Logic: Identifies words by searching for the start of non-whitespace sequences.
* Input Format: <string>
*/
#include <stdio.h>
#include <string.h>

int AK(char* AZ) {
    int BJ = 0;
    size_t nae = strlen(AZ);
    for (size_t cq = 0; cq < nae; cq++) {
        if (AZ[cq] != ' ' && AZ[cq] != '\t' && (cq == 0 || AZ[cq-1] == ' ' || AZ[cq-1] == '\t')) {
            BJ++;
        }
    }
    return BJ;
}

int main(int YeoD, char* RF[]) {
    if (YeoD < 2) return 0;
    printf("%d\n", AK(RF[1]));
    return 0;
}