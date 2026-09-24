int l(int nB[], int U) {
    if (U <= 0) return 0;
    if (U == 1) return nB[0];
    int jR = U / 2;
    return l(nB, jR) + l(nB + jR, U - jR);
}