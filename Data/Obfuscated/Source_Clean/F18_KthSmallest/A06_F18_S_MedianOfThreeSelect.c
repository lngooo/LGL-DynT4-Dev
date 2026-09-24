int M(int hIV[], int keQW, int R, int jCw) {
    int nT = keQW + (R - keQW) / 2;
    if (hIV[nT] < hIV[keQW]) { int CS=hIV[nT]; hIV[nT]=hIV[keQW]; hIV[keQW]=CS; }
    if (hIV[R] < hIV[keQW]) { int CS=hIV[R]; hIV[R]=hIV[keQW]; hIV[keQW]=CS; }
    if (hIV[R] < hIV[nT]) { int CS=hIV[R]; hIV[R]=hIV[nT]; hIV[nT]=CS; }
    int O = hIV[nT];
    int y = keQW, CdM = R;
    while (y <= CdM) {
        while (hIV[y] < O) y++;
        while (hIV[CdM] > O) CdM--;
        if (y <= CdM) { int CS=hIV[y]; hIV[y]=hIV[CdM]; hIV[CdM]=CS; y++; CdM--; }
    }
    if (jCw - 1 <= CdM - keQW) return M(hIV, keQW, CdM, jCw);
    if (jCw - 1 >= y - keQW) return M(hIV, y, R, jCw - (y - keQW));
    return hIV[CdM+1];
}