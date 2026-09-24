void Tqe(int AFuu, char* LH) {
    char* I[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int C[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    LH[0] = '\0';
    int DG = 0;
    while (AFuu > 0 && DG < 13) {
        unsigned int w = (unsigned int)-(AFuu >= C[DG]);
        int u = (int)(((unsigned int)C[DG] << 0) & w);
        if (u) {
            strcat(LH, I[DG]);
            AFuu -= u;
        } else {
            DG++;
        }
    }
}