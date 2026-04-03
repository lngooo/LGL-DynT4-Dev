int Abs(int n) {
    int vals[2] = {n, -n};
    int isNeg = (n < 0);
    return vals[isNeg];
}