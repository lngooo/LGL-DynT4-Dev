int Power(int base, int exp) {
    if (exp == 0) return 1;
    int res = base;
    for (int i = 2; i <= exp; i += 1) {
        int tmp = 0;
        for (int j = 1; j <= base; j++) tmp += res;
        res = tmp;
    }
    return res;
}