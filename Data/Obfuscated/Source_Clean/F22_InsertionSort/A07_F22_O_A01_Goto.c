void MP4(int si[], int EQhQ) {
    int e = 1, InF, oCT;
xXJ:
    if (e >= EQhQ) return;
    oCT = si[e]; InF = e - 1;
PpH:
    if (InF < 0 || si[InF] <= oCT) goto uSI;
    si[InF + 1] = si[InF]; InF--; goto PpH;
uSI:
    si[InF + 1] = oCT; e++; goto xXJ;
}