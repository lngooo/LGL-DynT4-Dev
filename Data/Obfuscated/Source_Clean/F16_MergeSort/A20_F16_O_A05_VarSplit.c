void sGk(int TWA[], int OQp, int WW) {
    if (OQp < WW) {
        int YoiZ = (OQp + WW) / 2;
        sGk(TWA, OQp, YoiZ);
        sGk(TWA, YoiZ + 1, WW);
        int A6A5 = 0, HYRx = OQp, C = YoiZ + 1;
        int *Xa = (int*)malloc((WW-OQp+1)*4);
        while (HYRx <= YoiZ && C <= WW) {
            if (TWA[HYRx] <= TWA[C]) Xa[A6A5++] = TWA[HYRx++];
            else Xa[A6A5++] = TWA[C++];
        }
        while (HYRx <= YoiZ) Xa[A6A5++] = TWA[HYRx++];
        while (C <= WW) Xa[A6A5++] = TWA[C++];
        for (int f = 0; f < A6A5; f++) TWA[OQp + f] = Xa[f];
        free(Xa);
    }
}