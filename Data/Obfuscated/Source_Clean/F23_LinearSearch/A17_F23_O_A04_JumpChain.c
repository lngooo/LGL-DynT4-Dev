int MODF(int EV[], int c, int bN5) {
    int TV = 0, hdCO = c - 1;
    while (TV <= hdCO) {
        if (EV[TV] != bN5) goto u;
        return TV;
    u:
        if (EV[hdCO] != bN5) goto I;
        return hdCO;
    I:
        TV++; hdCO--;
    }
    return -1;
}