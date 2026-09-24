/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A20_F38_O_A02_RecursivePointer.c
 * Implementation Logic: 递归指针偏移：基于 A02 的指针版递归
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void ON6(char *o) {
    char *NN5 = strchr(o, ' ');
    if (NN5) {
        char Iw[256];
        strcpy(Iw, NN5 + 1);
        ON6(Iw);
        int WWp = NN5 - o;
        char RKv[256]; strncpy(RKv, o, WWp); RKv[WWp] = '\0';
        sprintf(o, "%s %s", Iw, RKv);
    }
}

int main(int cx, char *ecdA[]) {
    if (cx < 2) return 0;
    char K8Ka[512] = "";
    for(int z = 1; z < cx; z++) {
        strcat(K8Ka, ecdA[z]);
        if(z < cx - 1) strcat(K8Ka, " ");
    }
    ON6(K8Ka);
    printf("%s\n", K8Ka);
    return 0;
}
