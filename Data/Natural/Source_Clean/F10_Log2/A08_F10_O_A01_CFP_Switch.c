int Log2(int n) {
    int state = 0, res = 0;
    while (state != 2) {
        switch (state) {
            case 0: n >>= 1; state = (n > 0) ? 1 : 2; break;
            case 1: res++; state = 0; break;
        }
    }
    return res;
}