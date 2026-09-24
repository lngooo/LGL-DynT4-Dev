int w(int YgU) {
    if (YgU < 0) return -1;
    if (YgU == 0) return 0;
    long d = YgU;
    while (1) {
        long CUAk = (d + YgU / d) >> 1;
        if (CUAk >= d) break;
        d = CUAk;
    }
    return (int)d;
}