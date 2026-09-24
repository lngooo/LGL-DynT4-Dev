int SL(int U0) {
    int gy = 0;
    if (U0 <= 1) return 0;
    while (1) {
        U0 /= 2;
        if (U0 == 0) break;
        gy++;
    }
    return gy;
}