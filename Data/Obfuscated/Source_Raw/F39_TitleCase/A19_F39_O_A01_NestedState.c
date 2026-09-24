/**
 * LGL-DynT4 Dataset - Function: TitleCase
 * -----------------------------------------
 * File: A19_F39_O_A01_NestedState.c
 * Implementation Logic: Logic of A01 nested inside multiple for-loops to alter CFG depth.
 * Input Format: <string>
 */
#include <stdio.h>
#include <ctype.h>

void U9(char* D9l) {
    for (int Qdx = 0; Qdx < 1; Qdx++) {
        int op = 1;
        for (int m80 = 0; D9l[m80]; m80++) {
            for (int Z = 0; Z < 1; Z++) {
                if (isspace(D9l[m80])) op = 1;
                else if (op) { D9l[m80] = toupper(D9l[m80]); op = 0; }
                else D9l[m80] = tolower(D9l[m80]);
            }
        }
    }
}

int main(int ef, char* QHF[]) {
    if (ef < 2) return 0;
    U9(QHF[1]);
    printf("%s", QHF[1]);
    return 0;
}