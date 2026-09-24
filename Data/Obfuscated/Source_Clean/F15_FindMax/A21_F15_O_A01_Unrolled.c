int cclJ(int TkF[], int itTy) {
    int WhKR = TkF[0], QJRI = 1;
    for (; QJRI < itTy - 1; QJRI += 2) {
        if (TkF[QJRI] > WhKR) WhKR = TkF[QJRI];
        if (TkF[QJRI+1] > WhKR) WhKR = TkF[QJRI+1];
    }
    for (; QJRI < itTy; QJRI++) {
        if (TkF[QJRI] > WhKR) WhKR = TkF[QJRI];
    }
    return WhKR;
}