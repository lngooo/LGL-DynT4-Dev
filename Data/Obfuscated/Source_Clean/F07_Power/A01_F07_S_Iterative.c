int RFiO(int pqQ, int exp) {
    int TB = 1;
    for (int eCME = 0; eCME < exp; eCME++) {
        TB *= pqQ;
    }
    return TB;
}