int Zi(int Tl6) {
    if (Tl6 < 0) return -1;
    if (Tl6 < 2) return Tl6;
    long dbj = Tl6, Xh;
exT:
    Xh = (dbj + Tl6 / dbj) / 2;
Lgvt:
    if (Xh >= dbj) goto ikU;
    dbj = Xh;
    Xh = (dbj + Tl6 / dbj) / 2;
    goto Lgvt;
ikU:
    return (int)dbj;
}