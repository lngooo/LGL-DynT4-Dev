/**
* LGL-DynT4 Dataset - Function: TrimSpace
* -----------------------------------------
* File: A15_F37_O_A01_DoubleLoop.c
* Logic: Nested loops for searching next valid character derived from A01.
*/
#include <stdio.h>
#include <ctype.h>

void omY(char* B) {
    int p2 = 0;
    for (int qZz = 0; B[qZz]; ) {
        if (!isspace((unsigned char)B[qZz])) {
            B[p2++] = B[qZz++];
        } else {
            int Yi2O = qZz;
            while (B[Yi2O] && isspace((unsigned char)B[Yi2O])) Yi2O++;
            qZz = Yi2O;
        }
    }
    B[p2] = '\0';
}

int main(int XA, char* Ssd[]) {
    if (XA < 2) return 0;
    omY(Ssd[1]);
    printf("%s\n", Ssd[1]);
    return 0;
}