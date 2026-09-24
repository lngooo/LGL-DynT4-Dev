int gB9x(int TjBl, int NZ6) {
    TjBl = abs(TjBl); NZ6 = abs(NZ6);
    if (TjBl <= 3 && NZ6 <= 3) {
        static int DB0U[4][4] = {{0,1,2,3},{1,1,1,1},{2,1,2,1},{3,1,1,3}};
        return DB0U[TjBl][NZ6];
    }
    return NZ6 == 0 ? TjBl : gB9x(NZ6, TjBl % NZ6);
}