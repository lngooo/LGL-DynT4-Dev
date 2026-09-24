int m0(int wt0Y, int ob) {
    wt0Y = abs(wt0Y); ob = abs(ob);
zv:
    if (ob == 0) goto e9X;
    int wPG = ob;
    ob = wt0Y % ob;
    wt0Y = wPG;
    goto zv;
e9X:
    return wt0Y;
}