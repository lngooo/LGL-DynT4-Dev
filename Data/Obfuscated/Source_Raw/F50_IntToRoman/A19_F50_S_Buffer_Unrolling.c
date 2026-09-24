/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A19_F50_S_Buffer_Unrolling.c
 * Implementation Logic: Unrolled buffer assignment for high performance.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ts(int ETqy, char* Uh) {
    char *VOK = Uh;
    int IsP = ETqy / 1000; ETqy %= 1000;
    while(IsP--) *VOK++ = 'M';
    int O = ETqy / 100; ETqy %= 100;
    if(O == 9) { *VOK++ = 'C'; *VOK++ = 'M'; }
    else if(O >= 5) { *VOK++ = 'D'; O-=5; while(O--) *VOK++ = 'C'; }
    else if(O == 4) { *VOK++ = 'C'; *VOK++ = 'D'; }
    else { while(O--) *VOK++ = 'C'; }
    int rV77 = ETqy / 10; ETqy %= 10;
    if(rV77 == 9) { *VOK++ = 'X'; *VOK++ = 'C'; }
    else if(rV77 >= 5) { *VOK++ = 'L'; rV77-=5; while(rV77--) *VOK++ = 'X'; }
    else if(rV77 == 4) { *VOK++ = 'X'; *VOK++ = 'L'; }
    else { while(rV77--) *VOK++ = 'X'; }
    if(ETqy == 9) { *VOK++ = 'I'; *VOK++ = 'X'; }
    else if(ETqy >= 5) { *VOK++ = 'V'; ETqy-=5; while(ETqy--) *VOK++ = 'I'; }
    else if(ETqy == 4) { *VOK++ = 'I'; *VOK++ = 'V'; }
    else { while(ETqy--) *VOK++ = 'I'; }
    *VOK = '\0';
}

int main(int B, char* C[]) {
    if (B < 2) return 0;
    char v[100];
    ts(atoi(C[1]), v);
    printf("%s\n", v);
    return 0;
}