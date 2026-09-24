int xSLl(int R9gl, int yBn) {
    while (yBn != 0) { int Ah = (~R9gl) & yBn; R9gl = R9gl ^ yBn; yBn = Ah << 1; }
    return R9gl;
}

int hDh(int FW[], int TsJ) {
    int f = FW[xSLl(TsJ, 1)];
    for(int Fhy = xSLl(TsJ, 2); Fhy >= 0; Fhy = xSLl(Fhy, 1)) {
        if (FW[Fhy] > f) f = FW[Fhy];
    }
    return f;
}