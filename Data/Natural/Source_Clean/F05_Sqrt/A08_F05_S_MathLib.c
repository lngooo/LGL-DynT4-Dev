int Sqrt(int n) {
    if (n < 0) return -1;
    double res = sqrt((double)n);
    return (int)floor(res);
}