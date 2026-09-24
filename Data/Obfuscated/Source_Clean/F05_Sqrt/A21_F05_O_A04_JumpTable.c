int BGuf(int Qgli) {
    if (Qgli < 0) return -1;
    long u7pa = 0, ypC = Qgli, vtL = 0;
    void *q[] = {&&Spd, &&exit};
Spd:
    if (u7pa <= ypC) {
        long D = u7pa + (ypC - u7pa) / 2;
        if (D * D <= Qgli) { vtL = D; u7pa = D + 1; }
        else ypC = D - 1;
        goto *q[0];
    }
exit:
    return (int)vtL;
}