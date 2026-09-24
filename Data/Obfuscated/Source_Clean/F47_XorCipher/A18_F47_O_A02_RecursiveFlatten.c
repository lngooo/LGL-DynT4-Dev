static void vcS(char *P11J, char *bspx, int W4Bc, int coT) {
    if (P11J[coT] == 0) return;
    P11J[coT] ^= bspx[coT % W4Bc];
    vcS(P11J, bspx, W4Bc, coT + 1);
}
void Cr(char *P11J, char *bspx) {
    int W4Bc = 0;
    while (bspx[W4Bc]) W4Bc++;
    if (W4Bc == 0) return;
    vcS(P11J, bspx, W4Bc, 0);
}