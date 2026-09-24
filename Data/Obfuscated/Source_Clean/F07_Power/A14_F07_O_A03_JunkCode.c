int OQSw(int Y, int exp) {
    int n9B0 = 1;
    int Fr = Y + exp;
    while (exp > 0) {
        if (exp % 2 == 1) {
            n9B0 *= Y;
            Fr++;
        }
        Y *= Y;
        exp /= 2;
        Fr = Fr * 0;
    }
    return n9B0 + Fr;
}