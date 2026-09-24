double v(int r[], int Z) {
    if (Z <= 0) return 0.0;
    if (Z == 1) return (double)r[0];
    double C = v(r, Z - 1);
    return (C * (Z - 1) + r[Z - 1]) / Z;
}