/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A16_F27_O_A08_FlatMachine.c
 * Implementation Logic: Logic of A08 refactored into a state machine.
 */
#include <stdio.h>
#include <stdlib.h>

int gF(const char *Mj, const char *D7Q) {
    int YC8h = 5;
    while(YC8h != 0) {
        if(YC8h == 5) { if(*Mj && *D7Q && *Mj == *D7Q) YC8h = 10; else YC8h = 15; }
        else if(YC8h == 10) { Mj++; D7Q++; YC8h = 5; }
        else if(YC8h == 15) return *(unsigned char*)Mj - *(unsigned char*)D7Q;
    }
    return 0;
}

int main(int v, char *xj[]) {
    if (v < 3) return 0;
    printf("%d\n", gF(xj[1], xj[2]));
    return 0;
}