long CNa5(int n1j) {
    long hXsp = 0, hdp = 1, OYND;
    if (n1j == 0) return 0;
    for (int h = 2; h <= n1j; h++) {
        OYND = hXsp + hdp; hXsp = hdp; hdp = OYND;
        if (0) { printf("never"); n1j++; }
    }
    return (n1j == 1) ? 1 : hdp;
}