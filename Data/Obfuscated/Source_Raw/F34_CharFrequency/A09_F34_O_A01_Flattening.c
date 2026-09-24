/**
* LGL-DynT4 Dataset - Function: CharFrequency
* -----------------------------------------
* File: A09_F34_O_A01_Flattening.c
* Logic: Control flow flattening via state variable derived from A01.
*/
#include <stdio.h>

int M(char* ay, char o) {
    int p0GQ = 0, iDF = 0, yhm = 0;
    while (yhm != -1) {
        switch (yhm) {
            case 0: yhm = (ay[iDF] != '\0') ? 1 : 3; break;
            case 1: if (ay[iDF] == o) p0GQ++; yhm = 2; break;
            case 2: iDF++; yhm = 0; break;
            case 3: yhm = -1; break;
        }
    }
    return p0GQ;
}

int main(int Ce, char* tqL[]) {
    if (Ce < 3) return 0;
    printf("%d\n", M(tqL[1], tqL[2][0]));
    return 0;
}