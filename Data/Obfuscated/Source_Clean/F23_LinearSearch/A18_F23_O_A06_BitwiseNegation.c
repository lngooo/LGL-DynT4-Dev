int e(int WG[], int Ur, int l) {
    for (int crMm = 0; crMm < Ur; crMm++) {
        if (~WG[crMm] == ~l) return crMm;
    }
    return -1;
}