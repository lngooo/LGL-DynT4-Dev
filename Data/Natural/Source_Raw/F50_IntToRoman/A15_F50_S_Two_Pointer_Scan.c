/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A15_F50_S_Two_Pointer_Scan.c
 * Implementation Logic: Using two pointers to scan an internal symbol string.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char sym[] = "M\0CM\0D\0CD\0C\0XC\0L\0XL\0X\0IX\0V\0IV\0I\0";
    res[0] = '\0';
    char* cur_sym = sym;
    for(int i=0; i<13; i++) {
        while(num >= val[i]) {
            strcat(res, cur_sym);
            num -= val[i];
        }
        cur_sym += strlen(cur_sym) + 1;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}