int FJWp(int PTFC, int f) {
    int ozS = 0, tQ = 1, EJH = 1, BVJ = 0;
    PTFC = abs(PTFC); f = abs(f);
    while (f != 0) {
        int wSD = PTFC / f;
        int tqo = PTFC % f;
        PTFC = f; f = tqo;
        int U = ozS; ozS = EJH - wSD * ozS; EJH = U;
        U = tQ; tQ = BVJ - wSD * tQ; BVJ = U;
    }
    return PTFC;
}