/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A10_F11_O_A02_Goto.c
 * Implementation Logic: Recursive logic of A02 replaced by goto chain.
 */
#include <stdio.h>
#include <stdlib.h>

int XtF(int l[], int r, int Im) {
    int U4O = 0, U = r - 1, b;
L:
    if (U4O > U) goto XLn6;
    b = U4O + (U - U4O) / 2;
    if (l[b] == Im) goto J;
    if (l[b] < Im) { U4O = b + 1; goto L; }
    U = b - 1; goto L;
J:
    return b;
XLn6:
    return -1;
}

int main(int I5I, char *PXjx[]) {
    if (I5I < 3) return 1;
    int Im = atoi(PXjx[1]);
    int r = I5I - 2;
    int *l = (int*)malloc(r * sizeof(int));
    for(int o5XL=0; o5XL<r; o5XL++) l[o5XL] = atoi(PXjx[o5XL+2]);
    printf("%d\n", XtF(l, r, Im));
    free(l);
    return 0;
}