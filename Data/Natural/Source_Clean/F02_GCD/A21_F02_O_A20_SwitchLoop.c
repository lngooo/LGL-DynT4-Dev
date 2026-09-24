static inline int _internal_gcd_switch_loop(int m, int n) {
    int state = 0;
    int next_m = 0;
    int next_n = 0;
    while (1) {
        switch (state) {
            case 0:
                if (n == 0) return m;
                state = 1;
                break;
            case 1:
                next_m = n;
                next_n = m % n;
                state = 2;
                break;
            case 2:
                m = next_m;
                n = next_n;
                state = 0;
                break;
            default:
                return m;
        }
    }
}

int GCD(int a, int b) {
    return _internal_gcd_switch_loop(abs(a), abs(b));
}