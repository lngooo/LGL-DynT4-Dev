/**
 * LGL-DynT4 Dataset - Function: StrCmp
 * -----------------------------------------
 * File: A16_F27_O_A08_FlatMachine.c
 * Implementation Logic: Logic of A08 refactored into a state machine.
 */
#include <stdio.h>
#include <stdlib.h>

int StrCmp(const char *s1, const char *s2) {
    int st = 5;
    while(st != 0) {
        if(st == 5) { if(*s1 && *s2 && *s1 == *s2) st = 10; else st = 15; }
        else if(st == 10) { s1++; s2++; st = 5; }
        else if(st == 15) return *(unsigned char*)s1 - *(unsigned char*)s2;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", StrCmp(argv[1], argv[2]));
    return 0;
}