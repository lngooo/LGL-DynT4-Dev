int KW(int FY) {
    int i = 0, OBzB = 31, yacI = 0;
    while (i <= OBzB) {
        int Ux = (i + OBzB) / 2;
        if ((1ULL << Ux) <= (unsigned int)FY) {
            yacI = Ux;
            i = Ux + 1;
        } else {
            OBzB = Ux - 1;
        }
    }
    return yacI;
}