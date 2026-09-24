/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A06_F29_S_LookupTable.c
* Implementation Logic: Uses a pre-allocated static table to simulate character set constraints.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

static int TL[256];
int pF(char* buG4, char* y) {
    memset(TL, 0, sizeof(TL));
    int Nu = 0;
    while(buG4[Nu]) { TL[(unsigned char)buG4[Nu]]++; Nu++; }
    Nu = 0;
    while(y[Nu]) { TL[(unsigned char)y[Nu]]--; Nu++; }
    for(Nu=0; Nu<256; Nu++) if(TL[Nu] != 0) return 0;
    return (strlen(buG4) == strlen(y));
}

int main(int H, char* DM55[]) {
    if (H < 3) return 0;
    printf("%d\n", pF(DM55[1], DM55[2]));
    return 0;
}