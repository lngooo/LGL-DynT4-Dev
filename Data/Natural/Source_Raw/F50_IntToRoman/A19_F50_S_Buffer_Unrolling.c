/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A19_F50_S_Buffer_Unrolling.c
 * Implementation Logic: Unrolled buffer assignment for high performance.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    char *p = res;
    int t = num / 1000; num %= 1000;
    while(t--) *p++ = 'M';
    int h = num / 100; num %= 100;
    if(h == 9) { *p++ = 'C'; *p++ = 'M'; }
    else if(h >= 5) { *p++ = 'D'; h-=5; while(h--) *p++ = 'C'; }
    else if(h == 4) { *p++ = 'C'; *p++ = 'D'; }
    else { while(h--) *p++ = 'C'; }
    int te = num / 10; num %= 10;
    if(te == 9) { *p++ = 'X'; *p++ = 'C'; }
    else if(te >= 5) { *p++ = 'L'; te-=5; while(te--) *p++ = 'X'; }
    else if(te == 4) { *p++ = 'X'; *p++ = 'L'; }
    else { while(te--) *p++ = 'X'; }
    if(num == 9) { *p++ = 'I'; *p++ = 'X'; }
    else if(num >= 5) { *p++ = 'V'; num-=5; while(num--) *p++ = 'I'; }
    else if(num == 4) { *p++ = 'I'; *p++ = 'V'; }
    else { while(num--) *p++ = 'I'; }
    *p = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}