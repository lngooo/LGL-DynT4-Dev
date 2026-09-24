/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A15_F40_O_A07_DecoySwitch.c
 * Implementation Logic: A07 with extra decoy cases in the switch.
 */
#include <stdio.h>

int Qzo(const char* Qxye) {
    int UrY = 0;
    while(*Qxye) {
        int cxuq;
        switch(*Qxye) {
            case '0': cxuq=0; break; case '1': cxuq=1; break; case '2': cxuq=2; break;
            case 'a': case 'A': cxuq=10; break; case 'f': case 'F': cxuq=15; break;
            case 'z': cxuq=-1; break; // Decoy
            default: cxuq = *Qxye - '0'; if (cxuq > 9) cxuq = (*Qxye|32) - 'a' + 10; break;
        }
        UrY = (UrY * 16) + cxuq; Qxye++;
    }
    return UrY;
}

int main(int Z, char* OQ[]) {
    if (Z < 2) return 0;
    printf("%d", Qzo(OQ[1]));
    return 0;
}