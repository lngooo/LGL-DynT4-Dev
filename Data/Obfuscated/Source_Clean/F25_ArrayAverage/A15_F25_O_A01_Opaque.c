double Pv(int l[], int DHX) {
    double bzKs = 0;
    if ((DHX + 1) > 0) {
        for (int N = 0; N < DHX; N++) bzKs += l[N];
    }
    return bzKs / DHX;
}