int nD0Y(int Tv) {
    int W = -1;
    unsigned int c7O1 = (unsigned int)Tv;
    unsigned int X = 1;
DQL9:
    if (X > c7O1) return W;
    X *= 2;
    W++;
    if (X == 0) return W;
    goto DQL9;
}