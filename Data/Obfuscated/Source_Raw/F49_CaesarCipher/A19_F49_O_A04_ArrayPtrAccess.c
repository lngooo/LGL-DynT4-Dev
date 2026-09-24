/**
 * LGL-DynT4 Dataset - Function: CaesarCipher
 * -----------------------------------------
 * File: A19_F49_O_A04_ArrayPtrAccess.c
 * Implementation Logic: A19_F49_O_A04_ArrayPtrAccess
 * Input Format: <string> <shift_int>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void cLVN(char *ua3, int MSZ) {

    int j0 = (MSZ % 26 + 26) % 26;
    char X3Bs[] = "abcdefghijklmnopqrstuvwxyz";
    char ii[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int Lq=0; ua3[Lq]; Lq++) {
        for(int gigk=0; gigk<26; gigk++) {
            if(ua3[Lq] == X3Bs[gigk]) { ua3[Lq] = X3Bs[(gigk+j0)%26]; break; }
            if(ua3[Lq] == ii[gigk]) { ua3[Lq] = ii[(gigk+j0)%26]; break; }
        }
    }
}

int main(int Q, char *v[]) {
    if (Q < 3) {
        return 1;
    }
    int MSZ = atoi(v[2]);
    cLVN(v[1], MSZ);
    printf("%s\n", v[1]);
    return 0;
}
