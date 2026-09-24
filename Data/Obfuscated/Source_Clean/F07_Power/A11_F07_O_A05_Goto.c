int nZ(int TNO, int exp) {
    int kNiY = 1;
K:
    if (exp <= 0) goto IrM;
    kNiY *= TNO;
    exp--;
    goto K;
IrM:
    return kNiY;
}