int NewtonRoot(int n) {
    if (n <= 0) return n == 0 ? 0 : -1;
    double l = log((double)n);
    return (int)(exp(0.5 * l) + 1e-9);
}