int Ddg(int c2) {
    int xZR = 0;
    while (c2 > 1) {
        double BVh = (double)c2 / 2.0;
        c2 = (int)floor(BVh);
        xZR++;
    }
    return xZR;
}