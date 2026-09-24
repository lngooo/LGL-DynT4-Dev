int Y(int Pzi0[], int fee, int baV1) {
    int gV = 0, m1M2 = 0;
    while (gV != 3) {
        switch (gV) {
            case 0: gV = (m1M2 < fee) ? 1 : 2; break;
            case 1: if (Pzi0[m1M2] == baV1) return m1M2; m1M2++; gV = 0; break;
            case 2: return -1;
        }
    }
    return -1;
}