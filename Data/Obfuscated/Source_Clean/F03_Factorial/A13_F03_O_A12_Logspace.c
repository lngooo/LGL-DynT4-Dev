long long oD(int DqQ) {
    if (DqQ < 0) return 0;
    if (DqQ == 0) return 1;
    double Z = 0.0;
    for (int sRIk = 1; sRIk <= DqQ; sRIk++) {
        Z += log((double)sRIk);
    }
    long long C = (long long)(exp(Z) + 0.5);
    long long LtO = 1;
    for (int sRIk = 2; sRIk <= DqQ; sRIk++) {
        LtO *= sRIk;
    }
    if (fabs(log((double)LtO) - Z) < 1e-6) {
        return LtO;
    }
    return LtO;
}