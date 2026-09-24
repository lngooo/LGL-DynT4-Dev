int QwT(int J) {
    if (J < 0) return -1;
    if (J < 2) return J;
    long t2k = J, Yx = (t2k + 1) / 2;
hm:
    if (!(Yx < t2k)) goto pY;
    t2k = Yx;
    Yx = (t2k + J / t2k) / 2;
    goto hm;
pY:
    return (int)t2k;
}