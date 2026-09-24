/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A20_F29_O_A04_IterativeRec.c
* Implementation Logic: Reconstructs recursive logic into a stack-based loop (simulated) derived from A04.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int H(char* K, char* q) {
    if (strlen(K) != strlen(q)) return 0;
    char Vo[256]; strcpy(Vo, q);
    int Fhu = strlen(K);
    for(int J7z=0; J7z<Fhu; J7z++){
        char* oKwV = strchr(Vo, K[J7z]);
        if(!oKwV) return 0;
        *oKwV = Vo[strlen(Vo)-1];
        Vo[strlen(Vo)-1] = '\0';
    }
    return 1;
}

int main(int SWgo, char* j1S5[]) {
    if (SWgo < 3) return 0;
    printf("%d\n", H(j1S5[1], j1S5[2]));
    return 0;
}