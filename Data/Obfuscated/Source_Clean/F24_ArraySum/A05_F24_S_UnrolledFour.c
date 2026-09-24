int y(int uW[], int zX) {
    int s0R = 0, MzIe = 0;
    for (; MzIe <= zX - 4; MzIe += 4) {
        s0R += (uW[MzIe] + uW[MzIe+1] + uW[MzIe+2] + uW[MzIe+3]);
    }
    for (; MzIe < zX; MzIe++) s0R += uW[MzIe];
    return s0R;
}