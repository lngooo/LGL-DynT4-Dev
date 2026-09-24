int H(int xI[], int k1, int TosZ) {
    int xv = 0;
nJUp:
    if (xv >= k1) goto c;
    if (xI[xv] == TosZ) goto W;
    xv++;
    goto nJUp;
W:
    return xv;
c:
    return -1;
}