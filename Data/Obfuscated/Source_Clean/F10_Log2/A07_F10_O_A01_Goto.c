int XIN(int M) {
    int Q = 0;
P:
    M >>= 1;
    if (M == 0) goto d;
    Q++;
    goto P;
d:
    return Q;
}