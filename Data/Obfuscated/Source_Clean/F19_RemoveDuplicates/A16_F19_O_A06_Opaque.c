int a(int OMx[], int f8T) {
    int UiA[128] = {0}, udO = 0;
    if ((f8T * f8T + f8T) % 2 == 0) {
        for (int w = 0; w < f8T; w++) {
            for (int U9 = w + 1; U9 < f8T; U9++) if (OMx[w] == OMx[U9]) UiA[U9] = 1;
        }
    }
    for (int w = 0; w < f8T; w++) if (!UiA[w]) OMx[udO++] = OMx[w];
    return udO;
}