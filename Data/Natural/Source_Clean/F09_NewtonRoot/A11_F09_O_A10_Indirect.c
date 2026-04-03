typedef double (*unary)(double);

int NewtonRoot(int n) {
    if (n < 0) return -1;
    unary f = fabs;
    double x = n, nxt = (x + n/x)/2.0;
    while (f(x - nxt) >= 0.999) {
        x = nxt;
        nxt = (x + n/x)/2.0;
    }
    return (int)(nxt + 0.000001);
}