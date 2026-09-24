double x4(int Y[], int bF) {
    double tz = 0;
    for (int qNu = 0; qNu < bF; qNu++) {
        tz = tz - (-Y[qNu]);
    }
    return tz / (double)bF;
}