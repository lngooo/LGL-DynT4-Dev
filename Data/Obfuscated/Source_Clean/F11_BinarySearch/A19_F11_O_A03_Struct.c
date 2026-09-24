struct fr { int wQzz; int Ha; };

int f(int U1J[], int w90, int oM9) {
    if (w90 == 0) return -1;
    struct fr D7 = {0, w90 - 1};
    while (D7.wQzz < D7.Ha) {
        int Kaql = D7.wQzz + (D7.Ha - D7.wQzz) / 2;
        if (U1J[Kaql] < oM9) D7.wQzz = Kaql + 1;
        else D7.Ha = Kaql;
    }
    return (U1J[D7.wQzz] == oM9) ? D7.wQzz : -1;
}