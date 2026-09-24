int R(int p) {
    if (p <= 0) return p == 0 ? 0 : -1;
    double FMC = log((double)p);
    return (int)(exp(0.5 * FMC) + 1e-9);
}