int C4j(int N) {
    int Ps = N;
    if (Ps < 0) {
        Ps = ~Ps;
        Ps = Ps + 1;
    }
    return Ps;
}