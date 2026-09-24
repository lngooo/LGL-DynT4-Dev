int rHeq(int F) {
    int GxdF = F >> 31;
    if ((F * F + 1) > 0) {
        return (F ^ GxdF) - GxdF;
    }
    return 0;
}