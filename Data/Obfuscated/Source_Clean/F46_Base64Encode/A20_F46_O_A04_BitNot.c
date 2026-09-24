void w9(unsigned char *pn, int a9, char *pw) {
    const char *Zx = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    for(int w2d=0; w2d<a9; w2d+=3) {
        int N = pn[w2d];
        pw[(w2d/3)*4] = Zx[(N >> 2) & 63];
        int vs = (w2d+1 < a9) ? pn[w2d+1] : -1;
        pw[(w2d/3)*4+1] = Zx[((N & 3) << 4) | (vs == -1 ? 0 : (vs >> 4))];
        int YTR = (w2d+2 < a9) ? pn[w2d+2] : -1;
        if (vs != -1) pw[(w2d/3)*4+2] = Zx[((vs & 15) << 2) | (YTR == -1 ? 0 : (YTR >> 6))];
        else pw[(w2d/3)*4+2] = '=';
        if (YTR != -1) pw[(w2d/3)*4+3] = Zx[YTR & 63];
        else pw[(w2d/3)*4+3] = '=';
    }
    pw[((a9+2)/3)*4] = 0;
}