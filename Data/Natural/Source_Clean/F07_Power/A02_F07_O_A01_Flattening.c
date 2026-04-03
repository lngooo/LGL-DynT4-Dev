int Power(int base, int exp) {
    int res = 1, i = 0, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (i < exp) ? 1 : 2; break;
            case 1: res *= base; i++; state = 0; break;
            case 2: state = -1; break;
        }
    }
    return res;
}