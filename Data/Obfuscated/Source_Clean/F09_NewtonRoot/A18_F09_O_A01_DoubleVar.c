int V1S(int s) {
    if (s < 0) return -1;
    long y = s, k = s;
    long oP = (y + 1) / 2;
    while (oP < k) {
        k = oP;
        long Rn = s / k;
        oP = (k + Rn) / 2;
    }
    return (int)k;
}