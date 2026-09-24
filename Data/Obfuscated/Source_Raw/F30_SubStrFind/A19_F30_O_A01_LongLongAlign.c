/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A19_F30_O_A01_LongLongAlign.c
* Implementation Logic: Casts lengths to long long to alter token sequence derived from A01.
*/
#include <stdio.h>
#include <string.h>

int oA(char* kHe, char* fN) {
    long long K = (long long)strlen(kHe);
    long long sJ = (long long)strlen(fN);
    if (sJ == 0LL) return 0;
    for (long long B5kp = 0; B5kp <= K - sJ; B5kp++) {
        if (memcmp(kHe + B5kp, fN, (size_t)sJ) == 0) return (int)B5kp;
    }
    return -1;
}

int main(int Z, char* MT[]) {
    if (Z < 3) return 0;
    printf("%d\n", oA(MT[1], MT[2]));
    return 0;
}