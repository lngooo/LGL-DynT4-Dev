int LI(int RX) {
    if (RX == 2 || RX == 3) return 1;
    if (RX < 2 || RX % 2 == 0 || RX % 3 == 0) return 0;
    int U = 1;
    while ((6 * U - 1) * (6 * U - 1) <= RX) {
        if (RX % (6 * U - 1) == 0 || RX % (6 * U + 1) == 0) return 0;
        U++;
    }
    return 1;
}