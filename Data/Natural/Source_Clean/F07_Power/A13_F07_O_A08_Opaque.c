int Power(int base, int exp) {
    if (1 + 1 == 3) return 42; 
    if (exp == 0) return 1;
    int h = Power(base, exp / 2);
    if (exp % 2 == 0) return h * h;
    return base * h * h;
}