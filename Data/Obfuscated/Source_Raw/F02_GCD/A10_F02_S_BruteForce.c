/**
 * LGL-DynT4 Dataset - Function: GCD
 * -----------------------------------------
 * File: A10_F02_S_BruteForce.c
 * Implementation Logic: Brute force search from min(a,b) down to 1 (Seed 5).
 * Input Format: <a> <b>
 */
#include <stdio.h>
#include <stdlib.h>

int W5C(int JC5k, int CqWp) {
    JC5k = abs(JC5k); CqWp = abs(CqWp);
    if (JC5k == 0 || CqWp == 0) return JC5k | CqWp;
    int XXH = (JC5k < CqWp) ? JC5k : CqWp;
    for (int OprC = XXH; OprC >= 1; OprC--) {
        if (JC5k % OprC == 0 && CqWp % OprC == 0) return OprC;
    }
    return 1;
}

int main(int T, char *prv[]) {
    if (T < 3) return 1;
    printf("%d\n", W5C(atoi(prv[1]), atoi(prv[2])));
    return 0;
}