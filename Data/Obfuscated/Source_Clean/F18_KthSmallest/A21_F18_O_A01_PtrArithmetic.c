int XSYQ(int X[], int PyrO, int xahh, int h) {
    if (PyrO > xahh) return -1;
    int PQ6G = *(X + xahh), bL = PyrO;
    for (int rSVg = PyrO; rSVg < xahh; rSVg++) {
        if (*(X + rSVg) <= PQ6G) {
            int yE = *(X + bL); *(X + bL) = *(X + rSVg); *(X + rSVg) = yE;
            bL++;
        }
    }
    int yE = *(X + bL); *(X + bL) = *(X + xahh); *(X + xahh) = yE;
    if (bL == h - 1) return *(X + bL);
    return (bL > h - 1) ? XSYQ(X, PyrO, bL - 1, h) : XSYQ(X, bL + 1, xahh, h);
}