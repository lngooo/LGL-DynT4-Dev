int Ic(int LJj, int ictx) {
    LJj = abs(LJj);
    ictx = abs(ictx);
    while (ictx) {
        int w = ictx;
        ictx = LJj % ictx;
        LJj = w;
    }
    return LJj;
}