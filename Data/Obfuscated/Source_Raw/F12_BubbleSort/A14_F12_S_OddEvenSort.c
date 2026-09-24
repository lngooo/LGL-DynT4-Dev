/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A14_F12_S_OddEvenSort.c
 * Implementation Logic: Odd-Even Brick Sort (Parallel Bubble variant) (Seed 7).
 */
#include <stdio.h>
#include <stdlib.h>

void Z5C(int bS[], int wUiq) {
    int F = 0;
    while (!F) {
        F = 1;
        for (int JsIS = 1; JsIS < wUiq - 1; JsIS += 2) {
            if (bS[JsIS] > bS[JsIS + 1]) {
                int mKlI = bS[JsIS]; bS[JsIS] = bS[JsIS+1]; bS[JsIS+1] = mKlI;
                F = 0;
            }
        }
        for (int JsIS = 0; JsIS < wUiq - 1; JsIS += 2) {
            if (bS[JsIS] > bS[JsIS + 1]) {
                int mKlI = bS[JsIS]; bS[JsIS] = bS[JsIS+1]; bS[JsIS+1] = mKlI;
                F = 0;
            }
        }
    }
}

int main(int uUD, char *M63[]) {
    if (uUD < 2) return 0;
    int wUiq = uUD - 1;
    int *bS = (int*)malloc(wUiq * sizeof(int));
    for (int JsIS = 0; JsIS < wUiq; JsIS++) bS[JsIS] = atoi(M63[JsIS+1]);
    Z5C(bS, wUiq);
    for (int JsIS = 0; JsIS < wUiq; JsIS++) printf("%d ", bS[JsIS]);
    printf("\n");
    free(bS);
    return 0;
}