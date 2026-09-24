/**
 * LGL-DynT4 Dataset - Function: GrayCode
 * -----------------------------------------
 * File: A18_F45_O_A06_PtrIndirection.c
 * Implementation Logic: Data indirection using pointers and LUT indexing derived from A06.
 */
#include <stdio.h>
#include <stdlib.h>

unsigned int GKE(unsigned int jip) {
    unsigned int rZn = 0;
    unsigned int dtU = jip >> 1;
    const unsigned int *VWyJ = &jip;
    for(int hj=0; hj<8; hj++) {
        unsigned char v = (*VWyJ >> (hj*4)) & 0xF;
        unsigned char qMVW = (dtU >> (hj*4)) & 0xF;
        rZn |= (unsigned int)(v ^ qMVW) << (hj*4);
    }
    return rZn;
}

int main(int kwq, char* bz[]) {
    if (kwq < 2) return 0;
    unsigned int jip = (unsigned int)strtoul(bz[1], NULL, 10);
    printf("%u", GKE(jip));
    return 0;
}