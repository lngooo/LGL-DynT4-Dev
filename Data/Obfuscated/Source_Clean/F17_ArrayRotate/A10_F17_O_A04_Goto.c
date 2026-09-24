void Q(int Rhw0[], int Mwyl, int h) {
    if (Mwyl == 0) return;
    h %= Mwyl;
    int x7mC = 0, o;
W:
    if (x7mC >= h) goto R6T;
    int mf0 = Rhw0[0];
    o = 0;
ZTo:
    if (o >= Mwyl - 1) goto F9;
    Rhw0[o] = Rhw0[o + 1];
    o++;
    goto ZTo;
F9:
    Rhw0[Mwyl - 1] = mf0;
    x7mC++;
    goto W;
R6T:
    return;
}