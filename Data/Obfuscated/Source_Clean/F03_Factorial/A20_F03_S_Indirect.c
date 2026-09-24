typedef long long (*d)(int, long long);

long long piY(int e1, long long Ln) {
    return e1 * Ln;
}

long long vX(int Y5) {
    if (Y5 < 0) return 0;
    d r = piY;
    long long iI = 1;
    for (int e1 = 1; e1 <= Y5; e1++) iI = r(e1, iI);
    return iI;
}