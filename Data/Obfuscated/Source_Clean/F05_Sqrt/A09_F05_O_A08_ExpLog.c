int y3N(int p935) {
    if (p935 < 0) return -1;
    if (p935 == 0) return 0;
    double u7 = exp(0.5 * log((double)p935));
    int mWk = (int)(u7 + 0.0000000001);
    return mWk;
}