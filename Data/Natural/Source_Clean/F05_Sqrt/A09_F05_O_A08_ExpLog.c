int Sqrt(int n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    double res = exp(0.5 * log((double)n));
    int i_res = (int)(res + 0.0000000001);
    return i_res;
}