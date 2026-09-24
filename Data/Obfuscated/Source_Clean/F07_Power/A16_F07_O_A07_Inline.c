int Pt(int rf, int exp) {
    int qfx = 1;
    dz:
    if (exp <= 0) return qfx;
    qfx *= rf;
    exp--;
    goto dz;
}