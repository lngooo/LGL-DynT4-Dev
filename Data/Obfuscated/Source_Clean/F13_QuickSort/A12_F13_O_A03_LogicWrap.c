void iNK(int HUOF[], int Zl4N, int Ts) {
    if (Zl4N >= Ts) return;
    int ah = Zl4N, D = Ts, V = HUOF[(Zl4N+Ts)/2];
    for (; ah <= D; ) {
        for (; HUOF[ah] < V; ) ah++;
        for (; HUOF[D] > V; ) D--;
        if (ah <= D) { int ZN = HUOF[ah]; HUOF[ah] = HUOF[D]; HUOF[D] = ZN; ah++; D--; }
    }
    if (Zl4N < D) iNK(HUOF, Zl4N, D);
    if (ah < Ts) iNK(HUOF, ah, Ts);
}