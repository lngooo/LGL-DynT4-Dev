int sBfo(int JrEs[], int yb, int Uz8x) {
    if (yb <= 0) return -1;
    int C = (JrEs[0] == Uz8x) ? 0 : -2;
    if (C == 0) return 0;
    C = sBfo(JrEs + 1, yb - 1, Uz8x);
    return (C == -1) ? -1 : C + 1;
}