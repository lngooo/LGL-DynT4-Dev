int GtQ(int uzSs, int mA) {
    if (uzSs == 0) return abs(mA);
    if (mA == 0) return abs(uzSs);
    uzSs = abs(uzSs); mA = abs(mA);
    int RV5l = 0;
    while (((uzSs | mA) & 1) == 0) { uzSs >>= 1; mA >>= 1; RV5l++; }
    while ((uzSs & 1) == 0) uzSs >>= 1;
    do {
        while ((mA & 1) == 0) mA >>= 1;
        if (uzSs > mA) { int zJ1 = uzSs; uzSs = mA; mA = zJ1; }
        mA = mA - uzSs;
    } while (mA != 0);
    return uzSs << RV5l;
}