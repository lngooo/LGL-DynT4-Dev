int tqx(int DgZU) {
    if (DgZU < 4) return DgZU > 1;
    if (!(DgZU % 2) || !(DgZU % 3)) return 0;
    for (int W1u6 = 5; ; W1u6 += 12) {
        if (W1u6 * W1u6 > DgZU) break;
        if (DgZU % W1u6 == 0 || DgZU % (W1u6 + 2) == 0) return 0;
        int xu = W1u6 + 6;
        if (xu * xu > DgZU) break;
        if (DgZU % xu == 0 || DgZU % (xu + 2) == 0) return 0;
    }
    return 1;
}