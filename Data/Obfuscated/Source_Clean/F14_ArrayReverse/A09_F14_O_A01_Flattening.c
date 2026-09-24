void A(int H[], int R) {
    int woUs = 0, mcb = R - 1, d = 0;
    while (d != -1) {
        switch (d) {
            case 0: d = (woUs < mcb) ? 1 : 2; break;
            case 1: { int MO = H[woUs]; H[woUs] = H[mcb]; H[mcb] = MO; woUs++; mcb--; d = 0; break; }
            case 2: d = -1; break;
        }
    }
}