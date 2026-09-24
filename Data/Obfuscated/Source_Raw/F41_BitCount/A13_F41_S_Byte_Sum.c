/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A13_F41_S_Byte_Sum.c
 * Implementation Logic: Processing integer as 4 separate bytes and summing their bits using a 256-entry table simulation.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int U3W(uint8_t mm) {
    int Hj = 0;
    for(int ai=0; ai<8; ai++) { if((mm >> ai) & 1) Hj++; }
    return Hj;
}

int zKg(uint32_t n4) {
    return U3W((uint8_t)(n4 & 0xFF)) + 
           U3W((uint8_t)((n4 >> 8) & 0xFF)) + 
           U3W((uint8_t)((n4 >> 16) & 0xFF)) + 
           U3W((uint8_t)((n4 >> 24) & 0xFF));
}

int main(int o, char* qA[]) {
    if (o < 2) return 0;
    uint32_t CeUS = (uint32_t)strtoul(qA[1], NULL, 10);
    printf("%d\n", zKg(CeUS));
    return 0;
}