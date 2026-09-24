long evg(int sqU2) {
    long vf = 0, wt = 1;
    if (sqU2 == 0) return 0;
    if (sqU2 == 1) return 1;
    for (int iMT8 = sqU2; iMT8 >= 2; iMT8--) {
        long PYv0 = vf + wt; vf = wt; wt = PYv0;
    }
    return wt;
}