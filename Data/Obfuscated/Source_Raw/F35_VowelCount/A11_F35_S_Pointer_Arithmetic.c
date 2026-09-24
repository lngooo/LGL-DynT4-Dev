/**
 * LGL-DynT4 Dataset - Function: VowelCount
 * -----------------------------------------
 * File: A11_F35_S_Pointer_Arithmetic.c
 * Logic: Iterate using pointer arithmetic instead of array indexing.
 */
#include <stdio.h>
#include <stdlib.h>

int lYl5(const char* EDu) {
    int VxJ = 0;
    const char* Eiy = EDu;
    while (*Eiy) {
        char K8 = *Eiy;
        if (K8 == 97 || K8 == 101 || K8 == 105 || K8 == 111 || K8 == 117 ||
            K8 == 65 || K8 == 69 || K8 == 73 || K8 == 79 || K8 == 85) VxJ++;
        Eiy++;
    }
    return VxJ;
}

int main(int u, char* Nf[]) {
    if (u < 2) { printf("0\n"); return 0; }
    printf("%d\n", lYl5(Nf[1]));
    return 0;
}