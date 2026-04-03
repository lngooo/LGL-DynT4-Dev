int NewtonRoot(int n) {
    if (n < 0) return -1;
    long x, y;
    int state = 0;
    while (state != 3) {
        switch (state) {
            case 0: x = n; y = (x + 1) / 2; state = 1; break;
            case 1: state = (y < x) ? 2 : 3; break;
            case 2: x = y; y = (x + n / x) / 2; state = 1; break;
        }
    }
    return (int)x;
}