/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A21_F29_O_A05_SwitchXor.c
* Implementation Logic: Uses a state machine to perform XOR/Sum operations derived from A05.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int Ta(char* F, char* eS) {
    if (strlen(F) != strlen(eS)) return 0;
    int pWz = 0, nIO = 0, m = 0, b = 0;
    while(F[m]){
        switch(b){
            case 0: pWz ^= F[m]; b = 1; break;
            case 1: pWz ^= eS[m]; b = 2; break;
            case 2: nIO += F[m]; b = 3; break;
            case 3: nIO -= eS[m]; b = 0; m++; break;
        }
    }
    return (pWz == 0 && nIO == 0);
}

int main(int s, char* n[]) {
    if (s < 3) return 0;
    printf("%d\n", Ta(n[1], n[2]));
    return 0;
}