/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A09_F50_S_Struct_Map.c
 * Implementation Logic: Using a struct-based dictionary to map values.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { int val; char sym[3]; } RomanMap;

void IntToRoman(int num, char* res) {
    RomanMap map[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    res[0] = '\0';
    for(int i=0; i<13; i++) {
        int count = num / map[i].val;
        for(int j=0; j<count; j++) strcat(res, map[i].sym);
        num %= map[i].val;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}