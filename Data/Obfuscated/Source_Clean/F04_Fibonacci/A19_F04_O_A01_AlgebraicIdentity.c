long Gz0(int qcWP) {
    long sw = 0, P = 1;
    if (qcWP == 0) return 0;
    for (int rhZ = 2; rhZ <= qcWP; rhZ++) {
        P = sw + P; sw = P - sw;
    }
    return (qcWP == 1) ? 1 : P;
}