int GV(int Cx, int exp) {
    int DXRL = 1;
    while (exp > 0) {
        if (exp % 2 == 1) DXRL *= Cx;
        Cx *= Cx;
        exp /= 2;
    }
    return DXRL;
}