/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A14_F50_O_A07_Intertwined.c
 * Implementation Logic: Intertwined pointer movements based on bitwise flags.
 */
#include <stdio.h>
#include <stdlib.h>

void IntToRoman(int num, char* res) {
    char *p = res;
    int check = 1;
    while(num >= 1000) { *p = 'M'; p++; num -= 1000; }
    if((num/100) == 9) { *p++ = 'C'; *p++ = 'M'; num -= 900; }
    if(num >= 500) { *p++ = 'D'; num -= 500; }
    if((num/100) == 4) { *p++ = 'C'; *p++ = 'D'; num -= 400; }
    while(num >= 100) { *p++ = 'C'; num -= 100; }
    if((num/10) == 9) { *p++ = 'X'; *p++ = 'C'; num -= 90; }
    if(num >= 50) { *p++ = 'L'; num -= 50; }
    if((num/10) == 4) { *p++ = 'X'; *p++ = 'L'; num -= 40; }
    while(num >= 10) { *p++ = 'X'; num -= 10; }
    if(num == 9) { *p++ = 'I'; *p++ = 'X'; num = 0; }
    if(num >= 5) { *p++ = 'V'; num -= 5; }
    if(num == 4) { *p++ = 'I'; *p++ = 'V'; num = 0; }
    while(num >= 1) { *p++ = 'I'; num -= 1; }
    *p = '\0';
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}