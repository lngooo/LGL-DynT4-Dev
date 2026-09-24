int kdgv(int mA) {
    if (mA < 0) return -1;
    if (mA < 2) return mA;
    long Qst = 1;

    while ((Qst << 2) <= mA) Qst <<= 1;
    long gd = (Qst + mA / Qst) >> 1;
    while (gd < Qst) {
        Qst = gd;
        gd = (Qst + mA / Qst) >> 1;
    }

    if ((Qst + 1) * (Qst + 1) <= mA) Qst++;
    return (int)Qst;
}