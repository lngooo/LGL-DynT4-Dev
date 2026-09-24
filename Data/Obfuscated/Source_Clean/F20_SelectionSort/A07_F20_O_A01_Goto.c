void CYi(int sxN[], int c5TX) {
    int pnNM = 0, gZaj, J3Z;
F:
    if (pnNM >= c5TX - 1) return;
    J3Z = pnNM; gZaj = pnNM + 1;
D:
    if (gZaj >= c5TX) goto k7s;
    if (sxN[gZaj] < sxN[J3Z]) J3Z = gZaj;
    gZaj++; goto D;
k7s:
    { int er = sxN[J3Z]; sxN[J3Z] = sxN[pnNM]; sxN[pnNM] = er; }
    pnNM++; goto F;
}