/**
 * LGL-DynT4 Dataset - Function: Log2
 * -----------------------------------------
 * File: A08_F10_O_A01_CFP_Switch.c
 * Implementation Logic: Switch
 * Input Format: <integer>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int t(int QgQH) {
    int NMS = 0, A1 = 0;
    while (NMS != 2) {
        switch (NMS) {
            case 0: QgQH >>= 1; NMS = (QgQH > 0) ? 1 : 2; break;
            case 1: A1++; NMS = 0; break;
        }
    }
    return A1;
}

int main(int G, char *s[]) {
    if (G < 2) return 0;
    int QgQH = atoi(s[1]);
    if (QgQH <= 0) return 0; 
    int Y = t(QgQH);
    printf("%d\n", Y);
    return 0;
}