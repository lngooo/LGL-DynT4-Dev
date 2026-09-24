void b7(int b[], int IM) {
    for (int RRVb = 1; RRVb < IM; RRVb++) {
        int dyXy = b[RRVb], BS;
        for (BS = RRVb - 1; BS >= 0 && b[BS] > dyXy; BS--) {
            b[BS+1] = b[BS];
        }
        b[BS+1] = dyXy;
    }
}