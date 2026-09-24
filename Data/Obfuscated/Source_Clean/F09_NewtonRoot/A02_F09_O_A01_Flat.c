int KKj(int Z4) {
    if (Z4 < 0) return -1;
    long ItlF, f;
    int o = 0;
    while (o != 3) {
        switch (o) {
            case 0: ItlF = Z4; f = (ItlF + 1) / 2; o = 1; break;
            case 1: o = (f < ItlF) ? 2 : 3; break;
            case 2: ItlF = f; f = (ItlF + Z4 / ItlF) / 2; o = 1; break;
        }
    }
    return (int)ItlF;
}