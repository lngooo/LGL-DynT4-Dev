int pWDK(int vbF2, int lFn) {
    int Zqv = 0x55;
    vbF2 = abs(vbF2); lFn = abs(lFn);
    if (vbF2 == 1 || lFn == 1) return (1 ^ Zqv) ^ Zqv;
    while(lFn) { int MS4 = lFn; lFn = vbF2 % lFn; vbF2 = MS4; }
    return vbF2;
}