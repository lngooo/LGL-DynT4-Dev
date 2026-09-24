long long Fhg(long long Ii, long long DxQ8) {
    while (DxQ8) {
        long long LVUj = Ii & DxQ8;
        Ii = Ii ^ DxQ8;
        DxQ8 = LVUj << 1;
    }
    return Ii;
}

long long Pg1F(int rcSx) {
    if (rcSx < 0) return 0;
    long long CC = 1;
    for (int xg = 2; xg <= rcSx; xg++) {
        long long I5P = 0;
        for (int dzr = 0; dzr < xg; dzr++) I5P = Fhg(I5P, CC);
        CC = I5P;
    }
    return CC;
}