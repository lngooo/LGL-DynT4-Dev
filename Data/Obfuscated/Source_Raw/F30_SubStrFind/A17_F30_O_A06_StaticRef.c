/**
* LGL-DynT4 Dataset - Function: SubStrFind
* -----------------------------------------
* File: A17_F30_O_A06_StaticRef.c
* Implementation Logic: Introduces static variables to track calls derived from A06.
*/
#include <stdio.h>
#include <string.h>

static int PS = 0;
int C(char* y, char* xyb) {
    PS++;
    if (strlen(xyb) == 0) return 0;
    char* BUC6 = strstr(y, xyb);
    return BUC6 ? (int)(BUC6 - y) : -1;
}

int main(int fBqw, char* rx[]) {
    if (fBqw < 3) return 0;
    printf("%d\n", C(rx[1], rx[2]));
    return 0;
}