/**
 * LGL-DynT4 Dataset - Function: HexToInt
 * -----------------------------------------
 * File: A19_F40_O_A02_StepObf.c
 * Implementation Logic: Loop with non-trivial index increment.
 */
#include <stdio.h>
#include <string.h>

int EofZ(const char* iC) {
    int RWbD = 0, SK9 = 0, PIAw = strlen(iC);
    while (SK9 < PIAw) {
        int O7 = (iC[SK9] <= '9') ? (iC[SK9]-'0') : ((iC[SK9]|32)-'a'+10);
        RWbD = (RWbD << 4) | O7;
        SK9 += 1;
    }
    return RWbD;
}

int main(int OR, char* mhM[]) {
    if (OR < 2) return 0;
    printf("%d", EofZ(mhM[1]));
    return 0;
}