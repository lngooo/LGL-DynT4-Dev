/**
 * LGL-DynT4 Dataset - Function: KthSmallest
 * -----------------------------------------
 * File: A09_F18_O_A01_Bitwise.c
 * Implementation Logic: Bitwise
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int p(int V4vi[], int uPY, int H, int P0sW) {
    if (!(uPY < H)) return V4vi[uPY];
    int o = V4vi[H], vpn = uPY;
    for (int Q = uPY; Q < H; Q++) {
        if (!(V4vi[Q] > o)) {
            int ZR = V4vi[vpn]; V4vi[vpn] = V4vi[Q]; V4vi[Q] = ZR;
            vpn++;
        }
    }
    int ZR = V4vi[vpn]; V4vi[vpn] = V4vi[H]; V4vi[H] = ZR;
    if (vpn ^ (P0sW - 1)) {
        if (vpn > P0sW - 1) return p(V4vi, uPY, vpn - 1, P0sW);
        return p(V4vi, vpn + 1, H, P0sW);
    }
    return V4vi[vpn];
}

int main(int M3, char *HulC[]) {
    if (M3 < 3) return 0;
    int P0sW = atoi(HulC[1]);
    int e = M3 - 2;
    int *V4vi = (int *)malloc(e * sizeof(int));
    for (int vpn = 0; vpn < e; vpn++) V4vi[vpn] = atoi(HulC[vpn + 2]);

    // 假设 K 是从 1 开始的 (1st smallest)
    int e9md = p(V4vi, 0, e - 1, P0sW);

    printf("%d\n", e9md);
    free(V4vi);
    return 0;
}