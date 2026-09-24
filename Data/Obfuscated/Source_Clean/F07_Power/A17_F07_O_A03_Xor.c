int T(int a, int exp) {
    int Ee = 1;
    while (exp ^ 0) {
        if (exp & 1) Ee *= a;
        a *= a;
        exp >>= 1;
    }
    return Ee;
}