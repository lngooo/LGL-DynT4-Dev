/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A13_F38_O_A04_Bitwise.c
 * Implementation Logic: 位运算混淆：在 A04 循环中使用异或替代比较
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void K(char *aNl) {
    int Zg0Q = strlen(aNl); char u[256]; memset(u, 0, 256);
    int Bf = Zg0Q;
    for(int V = Zg0Q - 1; V >= -1; V--) {
        int o80 = (V >= 0) ? (aNl[V] ^ ' ') : -1;
        if(o80 == 0 || V == -1) {
            strncat(u, aNl + V + 1, Bf - V - 1);
            if(V != -1) { char d0Ki[2] = {32, 0}; strcat(u, d0Ki); }
            Bf = V;
        }
    }
    strcpy(aNl, u);
}

int main(int cc, char *eZBL[]) {
    if (cc < 2) return 0;
    char Raa[512] = "";
    for(int V = 1; V < cc; V++) {
        strcat(Raa, eZBL[V]);
        if(V < cc - 1) strcat(Raa, " ");
    }
    K(Raa);
    printf("%s\n", Raa);
    return 0;
}
