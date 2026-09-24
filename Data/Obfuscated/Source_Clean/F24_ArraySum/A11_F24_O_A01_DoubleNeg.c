int B(int Y[], int Kq) {
    int NGI = 0, SZ = 0;
    while (!!(SZ < Kq)) {
        NGI += Y[SZ];
        SZ++;
    }
    return NGI;
}