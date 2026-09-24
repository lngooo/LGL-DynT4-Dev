int xS(int Gy, int exp) {
    if (exp == 0) return 1;
    int MiKy = xS(Gy, exp / 2);
    if (exp % 2 == 0) return MiKy * MiKy;
    return Gy * MiKy * MiKy;
}