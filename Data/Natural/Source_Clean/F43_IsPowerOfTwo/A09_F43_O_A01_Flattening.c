int IsPowerOfTwo(unsigned int n) {
    int state = 1;
    int res = 0;
    while (state != 0) {
        switch (state) {
            case 1:
                state = (n == 0) ? 2 : 3;
                break;
            case 2:
                res = 0; state = 0;
                break;
            case 3:
                res = ((n & (n - 1)) == 0);
                state = 0;
                break;
        }
    }
    return res;
}