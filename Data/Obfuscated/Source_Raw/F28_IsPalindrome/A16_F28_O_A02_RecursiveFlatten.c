/**
 * LGL-DynT4 Dataset - Function: IsPalindrome
 * -----------------------------------------
 * File: A16_F28_O_A02_RecursiveFlatten.c
 * Implementation Logic: RecursiveFlatten derived from seed.
 * Input Format: <string>
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int r(char *QfvJ) {
    if (!QfvJ[0] || !QfvJ[1]) return 1;
    int i = 0; while (QfvJ[i]) i++;
    int V = (QfvJ[0] == QfvJ[i-1]);
    if (!V) return 0;
    QfvJ[i-1] = '\0';
    return r(QfvJ + 1);
}

int main(int t, char *m5Ey[]) {
    if (t < 2) return 1;
    char *QfvJ = m5Ey[1];
    int cSRr = r(QfvJ);
    printf("%d\n", cSRr);
    return 0;
}