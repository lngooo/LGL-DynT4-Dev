int lsw(int bCut[], int M) {
    double w = 0.0;
    for (int I = 0; I < M; I++) {
        w += ((double)bCut[I] * 1.0) + 0.0;
    }
    return (int)w;
}