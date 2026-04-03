struct PState { int b; int e; int r; };

int Power(int base, int exp) {
    struct PState s = {base, exp, 1};
    while (s.e > 0) {
        if (s.e % 2 == 1) s.r *= s.b;
        s.b *= s.b;
        s.e /= 2;
    }
    return s.r;
}