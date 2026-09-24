int z(int S74, int exp) {
    if (1 + 1 == 3) return 42; 
    if (exp == 0) return 1;
    int D8F = z(S74, exp / 2);
    if (exp % 2 == 0) return D8F * D8F;
    return S74 * D8F * D8F;
}