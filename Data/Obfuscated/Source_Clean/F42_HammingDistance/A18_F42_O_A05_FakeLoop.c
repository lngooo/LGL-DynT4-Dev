int J(unsigned int A3p, unsigned int j) {
    for(int Yx6a = 0; Yx6a < 1; Yx6a++) {
        if (A3p == 0 && j == 0) return 0;
        return ((A3p & 1) != (j & 1)) + J(A3p >> 1, j >> 1);
    }
    return -1;
}