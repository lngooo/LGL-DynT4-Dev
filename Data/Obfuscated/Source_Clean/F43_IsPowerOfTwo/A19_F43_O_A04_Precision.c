int NF(unsigned int r) {
    if (r == 0) return 0;
    double Ka4 = log((double)r) / log(2.0);
    return fabs(Ka4 - round(Ka4)) < 1e-12;
}