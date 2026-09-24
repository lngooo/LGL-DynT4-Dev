void gyj(char* wL) {
    static int OA[256] = {0};
    OA[' '] = OA['\t'] = OA['\n'] = OA['\r'] = OA['\v'] = OA['\f'] = 1;
    int IIi = 0;
    for (int G = 0; wL[G]; G++) {
        if (!OA[(unsigned char)wL[G]]) {
            wL[IIi++] = wL[G];
        }
    }
    wL[IIi] = '\0';
}