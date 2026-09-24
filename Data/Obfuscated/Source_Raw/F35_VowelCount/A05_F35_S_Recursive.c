/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A05_F35_S_Recursive.c
 * Logic: Pure recursive implementation.
 */
#include <stdio.h>
#include <stdlib.h>

int r(char ip2) {
    return (ip2=='a'||ip2=='e'||ip2=='i'||ip2=='o'||ip2=='u'||ip2=='A'||ip2=='E'||ip2=='I'||ip2=='O'||ip2=='U');
}

int zk4(const char* vJ) {
    if (*vJ == '\0') return 0;
    return r(*vJ) + zk4(vJ + 1);
}

int main(int Ad9u, char* YWCI[]) {
    if (Ad9u < 2) { printf("0\n"); return 0; }
    printf("%d\n", zk4(YWCI[1]));
    return 0;
}