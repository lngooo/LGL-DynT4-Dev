/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A06_F38_S_InPlaceShift.c
 * Implementation Logic: 原地移动法：利用字符平移覆盖实现
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void b(char *S) {
    int DByh = strlen(S);
    char *Tyha = (char*)malloc(DByh + 1);
    int xy = 0;
    for(int U = DByh-1; U >= 0; U--) {
        if(S[U] == ' ') {
            for(int Js=U+1; S[Js]!=' ' && S[Js]!='\0'; Js++) Tyha[xy++] = S[Js];
            Tyha[xy++] = ' ';
        }
    }
    for(int Js=0; S[Js]!=' ' && S[Js]!='\0'; Js++) Tyha[xy++] = S[Js];
    Tyha[xy] = '\0';
    strcpy(S, Tyha); free(Tyha);
}

int main(int PpP, char *L[]) {
    if (PpP < 2) return 0;
    char Y[512] = "";
    for(int U = 1; U < PpP; U++) {
        strcat(Y, L[U]);
        if(U < PpP - 1) strcat(Y, " ");
    }
    b(Y);
    printf("%s\n", Y);
    return 0;
}
