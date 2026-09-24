int NZP(int Q) {
    static const int Qg8[] = {0, 1, 3, 6, 10, 15, 21, 28, 36, 45, 55};
    if (Q >= 0 && Q <= 10) return Qg8[Q];
    return (Q * (Q + 1)) / 2;
}