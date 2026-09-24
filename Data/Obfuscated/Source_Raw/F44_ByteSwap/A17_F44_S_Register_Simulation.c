/**
 * LGL-DynT4 Dataset - Function: ByteSwap
 * -----------------------------------------
 * File: A17_F44_S_Register_Simulation.c
 * Implementation Logic: Simulates low-level register byte isolation and reconstruction steps.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint32_t Z(uint32_t u37) {
    uint32_t VAY, F, K, JZ;
    VAY = (u37 >> 0) & 0xFF;
    F = (u37 >> 8) & 0xFF;
    K = (u37 >> 16) & 0xFF;
    JZ = (u37 >> 24) & 0xFF;
    return (VAY << 24) | (F << 16) | (K << 8) | JZ;
}

int main(int E, char* D[]) {
    if (E < 2) return 0;
    uint32_t tpA = (uint32_t)strtoul(D[1], NULL, 10);
    printf("%u\n", Z(tpA));
    return 0;
}