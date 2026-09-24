int iO(int K[], int dk, int lH9) {
    int *MKOb = K;
    int fnC = 0;
    int Eko1 = 1 << (31 - __builtin_clz(dk));
    while (Eko1 > 0) {
        int MjYL = fnC | Eko1;
        if (MjYL < dk && *(MKOb + MjYL) <= lH9) fnC = MjYL;
        Eko1 >>= 1;
    }
    return (*(MKOb + fnC) == lH9) ? fnC : -1;
}