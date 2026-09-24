/**
 * LGL-DynT4 Dataset - Function: Base64Encode
 * -----------------------------------------
 * File: A21_F46_O_A03_JumpTable.c
 * Implementation Logic: JumpTable
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void SYn(unsigned char *WX, int m4, char *s2) {
    const char *z6 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for (int LB = 0; LB < m4; LB += 3) {
        unsigned int aZ = (WX[LB] << 16) | (LB + 1 < m4 ? WX[LB + 1] << 8 : 0) | (LB + 2 < m4 ? WX[LB + 2] : 0);
        for (int w = 0; w < 4; w++) {
            switch (w) {
                case 0:
                    s2[(LB / 3) * 4] = z6[(aZ >> 18) & 63];
                    break;
                case 1:
                    s2[(LB / 3) * 4 + 1] = z6[(aZ >> 12) & 63];
                    break;
                case 2:
                    s2[(LB / 3) * 4 + 2] = (LB + 1 < m4) ? z6[(aZ >> 6) & 63] : '=';
                    break;
                default:
                    s2[(LB / 3) * 4 + 3] = (LB + 2 < m4) ? z6[aZ & 63] : '=';
                    break;
            }
        }
    }
    s2[((m4 + 2) / 3) * 4] = 0;
}

int main(int hi, char *Wrf[]) {
    if (hi < 2) return 1;
    unsigned char *WX = (unsigned char *)Wrf[1];
    int m4 = 0;
    while (WX[m4]) m4++;
    char s2[400] = {0};
    SYn(WX, m4, s2);
    printf("%s\n", s2);
    return 0;
}