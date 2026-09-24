int S(int niws[], int Pf) {
    int E = 1, kTD = niws[0], D = 0;
    while (D != 3) {
        switch (D) {
            case 0: D = (E < Pf) ? 1 : 3; break;
            case 1: if (niws[E] > kTD) kTD = niws[E]; D = 2; break;
            case 2: E++; D = 0; break;
        }
    }
    return kTD;
}