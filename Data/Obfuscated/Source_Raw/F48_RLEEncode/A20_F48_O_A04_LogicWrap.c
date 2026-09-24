/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A20_F48_O_A04_LogicWrap.c
 * Implementation Logic: LogicWrap
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void R2(const char *Zy, char *ggvI) {
    int JvJ = 0, v = strlen(Zy);
    char Zz[256] = {0};
    for (; JvJ < v; ) {
        int lQ = 1;
        for (int h = JvJ + 1; h < v; h++) {
            if (Zy[h] == Zy[JvJ]) lQ++;
            else break;
        }
        int csDZ = strlen(Zz);
        Zz[csDZ] = Zy[JvJ];
        sprintf(Zz + csDZ + 1, "%d", lQ);
        JvJ += lQ;
    }
    strcpy(ggvI, Zz);
}

int main(int jb, char *oM5[]) {
    if (jb < 2) return 0;
    char *RaEE = oM5[1];
    char xTr[256] = {0};
    R2(RaEE, xTr);
    printf("%s\n", xTr);
    return 0;
}