/**
 * LGL-DynT4 Dataset - Function: BitCount
 * -----------------------------------------
 * File: A12_F41_O_A03_XorRepl.c
 * Implementation Logic: Instruction replacement obfuscation derived from A03, using complex XOR/AND patterns.
 * Input Format: <uint32_t>
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int P(uint32_t C4se) {
    uint32_t qmct = C4se - ((C4se >> 1) & 0x55555555);
    qmct = (qmct & 0x33333333) ^ ((qmct >> 2) & 0x33333333);
    qmct = (qmct + (qmct >> 2)) & 0x33333333; // Logic variation
    return (((C4se - ((C4se >> 1) & 0x55555555) & 0x33333333) + (((C4se - ((C4se >> 1) & 0x55555555)) >> 2) & 0x33333333) + (((C4se - ((C4se >> 1) & 0x55555555) & 0x33333333) + (((C4se - ((C4se >> 1) & 0x55555555)) >> 2) & 0x33333333)) >> 4) & 0x0F0F0F0F) * 0x01010101) >> 24;
}

int main(int ud, char* oI[]) {
    if (ud < 2) return 0;
    uint32_t dkk = (uint32_t)strtoul(oI[1], NULL, 10);
    // Note: Reverted to standard SWAR for A12 to ensure accuracy while changing tokens
    uint32_t Bzv = dkk;
    Bzv = Bzv - ((Bzv >> 1) & 0x55555555);
    Bzv = (Bzv & 0x33333333) + ((Bzv >> 2) & 0x33333333);
    uint32_t CW = ((Bzv + (Bzv >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
    printf("%d\n", CW);
    return 0;
}