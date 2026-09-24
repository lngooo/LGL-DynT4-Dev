int W7(char *uN7W) {
    int R = 0; while (uN7W[R]) R++;
    char Y[100];
    for (int f = 0; f < R; f++) {
        if ((f * f + f) % 2 == 0) Y[f] = uN7W[f];
    }
    for (int f = 0; f < R; f++) {
        if (uN7W[f] != Y[R - 1 - f]) return 0;
    }
    return 1;
}