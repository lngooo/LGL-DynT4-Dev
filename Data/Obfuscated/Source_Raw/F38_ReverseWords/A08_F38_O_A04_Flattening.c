/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A08_F38_O_A04_Flattening.c
 * Implementation Logic: 控制流平坦化：基于 A04 引入 Switch 状态机
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void P(char *xt3f) {
    int T = 0, sa, Iugz = strlen(xt3f), XNE; char H[256] = "";
    while(T != 99) {
        switch(T) {
            case 0: XNE = Iugz; sa = Iugz - 1; T = 1; break;
            case 1: T = (sa >= -1) ? 2 : 4; break;
            case 2: if(sa == -1 || xt3f[sa] == ' ') {
                        strncat(H, xt3f + sa + 1, XNE - sa - 1);
                        if(sa != -1) strcat(H, " ");
                        XNE = sa;
                    }
                    T = 3; break;
            case 3: sa--; T = 1; break;
            case 4: strcpy(xt3f, H); T = 99; break;
        }
    }
}

int main(int x, char *BA[]) {
    if (x < 2) return 0;
    char sJ[512] = "";
    for(int sa = 1; sa < x; sa++) {
        strcat(sJ, BA[sa]);
        if(sa < x - 1) strcat(sJ, " ");
    }
    P(sJ);
    printf("%s\n", sJ);
    return 0;
}
