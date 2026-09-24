/**
 * LGL-DynT4 Dataset - Function: RLEEncode
 * -----------------------------------------
 * File: A15_F48_O_A04_DummyLoop.c
 * Implementation Logic: DummyLoop
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void m(const char *UlZ, char *tr2) {
    int sJMa = 0, FBb = 0;
    while (UlZ[sJMa]) {
        int V9IA = 0;
        char Xo = UlZ[sJMa];
        for(int e79=0; e79<1; e79++) {
            while(UlZ[sJMa+V9IA] == Xo) V9IA++;
        }
        FBb += sprintf(tr2 + FBb, "%c%d", Xo, V9IA);
        sJMa += V9IA;
    }
}

int main(int S, char *AueX[]) {
    if (S < 2) return 0;
    char *Y = AueX[1];
    char Oc6S[256] = {0};
    m(Y, Oc6S);
    printf("%s\n", Oc6S);
    return 0;
}