void qEqW(int P7i8[], int K) {
    int cx2s = 0, A2N6 = 0, Cx, xfR;
    while (cx2s != 3) {
        switch (cx2s) {
            case 0: cx2s = (A2N6 < K - 1) ? 1 : 3; break;
            case 1: Cx = A2N6; xfR = A2N6 + 1; cx2s = 2; break;
            case 2:
                for (; xfR < K; xfR++) if (P7i8[xfR] < P7i8[Cx]) Cx = xfR;
                int GCq4 = P7i8[Cx]; P7i8[Cx] = P7i8[A2N6]; P7i8[A2N6] = GCq4;
                A2N6++; cx2s = 0; break;
        }
    }
}