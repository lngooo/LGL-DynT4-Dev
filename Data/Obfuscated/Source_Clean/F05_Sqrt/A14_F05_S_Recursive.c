int x(long RhA, long Y5U, long M) {
    if (Y5U > M) return (int)M;
    long q9PY = Y5U + (M - Y5U) / 2;
    if (q9PY * q9PY == RhA) return (int)q9PY;
    if (q9PY * q9PY < RhA) return x(RhA, q9PY + 1, M);
    return x(RhA, Y5U, q9PY - 1);
}

int Ud(int RhA) {
    if (RhA < 0) return -1;
    return x(RhA, 0, RhA);
}