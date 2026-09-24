void p1X(int UBG[], int U, int x) {
    while (U < x) {
        int OGw = UBG[U];
        UBG[U] = UBG[x];
        UBG[x] = OGw;
        U++; x--;
    }
}

void d(int UBG[], int C, int KVa) {
    if (C == 0) return;
    KVa = KVa % C;
    if (KVa == 0) return;
    p1X(UBG, 0, KVa - 1);
    p1X(UBG, KVa, C - 1);
    p1X(UBG, 0, C - 1);
}