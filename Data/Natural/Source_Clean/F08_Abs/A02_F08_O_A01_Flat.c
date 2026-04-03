int Abs(int n) {
    int state = 0;
    int res = 0;
    while (state != 3) {
        switch (state) {
            case 0: state = (n < 0) ? 1 : 2; break;
            case 1: res = -n; state = 3; break;
            case 2: res = n; state = 3; break;
        }
    }
    return res;
}