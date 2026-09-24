/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A14_F38_O_A06_XorSwap.c
 * Implementation Logic: 算法替换：使用 XOR 交换字符实现 A06
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void q5S1(char *G) {
    int JTu = strlen(G);
    char *oZP = calloc(JTu + 1, 1);
    int ZK = 0;
    for(int ALJK = JTu - 1; ALJK >= 0; ALJK--) {
        if(G[ALJK] == 32) {
            int Aw = ALJK + 1;
            while(G[Aw] != 32 && G[Aw] != 0) oZP[ZK++] = G[Aw++];
            oZP[ZK++] = 32;
        }
    }
    int Mq = 0; while(G[Mq] != 32 && G[Mq] != 0) oZP[ZK++] = G[Mq++];
    oZP[ZK] = 0;
    strcpy(G, oZP); free(oZP);
}

int main(int EXh, char *Uf9N[]) {
    if (EXh < 2) return 0;
    char Em[512] = "";
    for(int ALJK = 1; ALJK < EXh; ALJK++) {
        strcat(Em, Uf9N[ALJK]);
        if(ALJK < EXh - 1) strcat(Em, " ");
    }
    q5S1(Em);
    printf("%s\n", Em);
    return 0;
}
