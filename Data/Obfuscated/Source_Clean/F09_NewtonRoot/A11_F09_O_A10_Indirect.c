typedef double (*ZIA)(double);

int Jd(int HA9I) {
    if (HA9I < 0) return -1;
    ZIA K4pE = fabs;
    double fz5 = HA9I, G = (fz5 + HA9I/fz5)/2.0;
    while (K4pE(fz5 - G) >= 0.999) {
        fz5 = G;
        G = (fz5 + HA9I/fz5)/2.0;
    }
    return (int)(G + 0.000001);
}