int z0w9(int sc) {
    if (sc < 0) return -1;
    if (sc < 4) {
        int Tfw[] = {0^0xF, 1^0xF, 1^0xF, 1^0xF};
        return Tfw[sc] ^ 0xF;
    }
    int PqVE = 2;
    while (PqVE * PqVE <= sc) PqVE++;
    return PqVE - 1;
}