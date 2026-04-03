int GCD(int a, int b) {
    int t, state = 0;
    a = abs(a); b = abs(b);
    while (state != 3) {
        switch (state) {
            case 0: state = (b != 0) ? 1 : 3; break;
            case 1: t = b; b = a % b; state = 2; break;
            case 2: a = t; state = 0; break;
        }
    }
    return a;
}