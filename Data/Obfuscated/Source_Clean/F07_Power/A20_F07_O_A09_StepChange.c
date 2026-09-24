int w9Bu(int pr, int exp) {
    if (exp == 0) return 1;
    int p = pr;
    for (int X8S = 2; X8S <= exp; X8S += 1) {
        int Q = 0;
        for (int nHM = 1; nHM <= pr; nHM++) Q += p;
        p = Q;
    }
    return p;
}