long long gpyK(int KsS) {
    if (KsS < 0) return 0;
    long long b1Q = 1;
    while (KsS > 1) {
        b1Q *= KsS--;
    }
    return b1Q;
}