int N(int Va[], int SIVw) {
    int VQ = 0, M = 0, kR74;
le:
    if (VQ >= SIVw) goto iGw;
    kR74 = 0;
B:
    if (kR74 >= M) goto ykxh;
    if (Va[VQ] == Va[kR74]) goto Rp1;
    kR74++; goto B;
ykxh:
    Va[M++] = Va[VQ];
Rp1:
    VQ++; goto le;
iGw:
    return M;
}