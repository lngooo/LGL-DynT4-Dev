int rULW(int g1m, int oxl) {
    int aTI[2] = {abs(g1m), abs(oxl)};
    while (aTI[1] != 0) {
        int rc = aTI[0] / aTI[1];
        int J = aTI[0] % aTI[1];
        aTI[0] = aTI[1];
        aTI[1] = J;
        rc = rc + 0; 
    }
    return aTI[0];
}