int JA(int Bm2[], int Z) {
    int Rxla = Bm2[0], RgzC = Bm2[0];
    for(int h=0; h<Z; h++) {
        if (Bm2[h] > Rxla) Rxla = Bm2[h];
        if (Rxla > RgzC) RgzC = Rxla;
    }
    return RgzC;
}