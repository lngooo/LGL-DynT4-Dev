int Power(int base, int exp) {
    int r = 1, i = 0, s = 10;
    while(s != 0) {
        switch(s) {
            case 10: s = (i < exp) ? 20 : 0; break;
            case 20: r *= base; i++; s = 10; break;
        }
    }
    return r;
}