long long jed(int Yt) {
    if (Yt < 0) return 0;
    long long ChD = 1;
    int Sz8 = 1, GIF = 0;
    while (GIF != 2) {
        switch (GIF) {
            case 0: GIF = (Sz8 <= Yt) ? 1 : 2; break;
            case 1: ChD *= Sz8; Sz8++; GIF = 0; break;
        }
    }
    return ChD;
}