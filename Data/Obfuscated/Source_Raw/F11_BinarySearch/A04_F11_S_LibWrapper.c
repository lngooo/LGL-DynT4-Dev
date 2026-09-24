/**
 * LGL-DynT4 Dataset - Function: BinarySearch
 * -----------------------------------------
 * File: A04_F11_S_LibWrapper.c
 * Implementation Logic: Using standard C library bsearch function.
 */
#include <stdio.h>
#include <stdlib.h>

int AI(const void *fwo4, const void *Qv) {
    return (*(int*)fwo4 - *(int*)Qv);
}

int xsn(int J0WP[], int h, int Cp5) {
    int *cR = (int*)bsearch(&Cp5, J0WP, h, sizeof(int), AI);
    if (cR == NULL) return -1;
    return (int)(cR - J0WP);
}

int main(int y6Y, char *y[]) {
    if (y6Y < 3) return 1;
    int Cp5 = atoi(y[1]);
    int h = y6Y - 2;
    int *J0WP = (int*)malloc(h * sizeof(int));
    for(int IUs=0; IUs<h; IUs++) J0WP[IUs] = atoi(y[IUs+2]);
    printf("%d\n", xsn(J0WP, h, Cp5));
    free(J0WP);
    return 0;
}