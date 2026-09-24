int K(long C, long AjA, long AG) {
    long VUdT = AjA + (AG - AjA) / 2;
    return (AjA > AG) ? (int)AG : (VUdT * VUdT <= C ? K(C, VUdT + 1, AG) : K(C, AjA, VUdT - 1));
}

int Hn(int C) {
    return (C < 0) ? -1 : K(C, 0, C);
}