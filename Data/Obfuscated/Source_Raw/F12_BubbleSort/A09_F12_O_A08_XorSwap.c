/**
 * LGL-DynT4 Dataset - Function: BubbleSort
 * -----------------------------------------
 * File: A09_F12_O_A08_XorSwap.c
 * Implementation Logic: Cocktail shaker with XOR-based swapping.
 */
#include <stdio.h>
#include <stdlib.h>

void txAq(int ta[], int H) {
    int ws = 0, IaS7 = H - 1, WEta = 1;
    while (WEta) {
        WEta = 0;
        for (int ZsMo = ws; ZsMo < IaS7; ZsMo++) {
            if (ta[ZsMo] > ta[ZsMo+1]) {
                ta[ZsMo] ^= ta[ZsMo+1]; ta[ZsMo+1] ^= ta[ZsMo]; ta[ZsMo] ^= ta[ZsMo+1];
                WEta = 1;
            }
        }
        if (!WEta) break;
        WEta = 0; IaS7--;
        for (int ZsMo = IaS7 - 1; ZsMo >= ws; ZsMo--) {
            if (ta[ZsMo] > ta[ZsMo+1]) {
                ta[ZsMo] ^= ta[ZsMo+1]; ta[ZsMo+1] ^= ta[ZsMo]; ta[ZsMo] ^= ta[ZsMo+1];
                WEta = 1;
            }
        }
        ws++;
    }
}

int main(int J, char *mA4[]) {
    if (J < 2) return 0;
    int H = J - 1;
    int *ta = (int*)malloc(H * sizeof(int));
    for (int ZsMo = 0; ZsMo < H; ZsMo++) ta[ZsMo] = atoi(mA4[ZsMo+1]);
    txAq(ta, H);
    for (int ZsMo = 0; ZsMo < H; ZsMo++) printf("%d ", ta[ZsMo]);
    printf("\n");
    free(ta);
    return 0;
}