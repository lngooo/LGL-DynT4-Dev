void y(int U, char* SU) {
    int KPx[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* tDVK[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    SU[0] = '\0';
    for (int zbW = 0; zbW < 13; zbW++) {
        while (U >= KPx[zbW]) {
            strcat(SU, tDVK[zbW]);
            U -= KPx[zbW];
        }
    }
}