long long xRVR(int Ly0) {
    if (Ly0 < 0) return 0;
    long long gRo = 1;
    for (int bN48 = 1; bN48 <= Ly0; bN48++) {
        long long NoP = 0;
        for (int O = 0; O < bN48; O++) {
            NoP += gRo;
        }
        gRo = NoP;
    }
    return gRo;
}