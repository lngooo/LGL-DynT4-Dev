int BG(int tk) {
    if (tk < 0) return -1;
    long u7 = 0, w8 = tk, fqm = 0;
    while (u7 <= w8) {
        long iOt = u7 + (w8 - u7) / 2;
        if (iOt * iOt <= tk) {
            fqm = iOt;
            if ((iOt * iOt) >= 0) u7 = iOt + 1; 
        } else {
            w8 = iOt - 1;
        }
    }
    return (int)fqm;
}