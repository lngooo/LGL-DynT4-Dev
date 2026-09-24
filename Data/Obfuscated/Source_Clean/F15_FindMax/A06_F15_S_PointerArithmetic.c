int DtKi(int kYq[], int Ex) {
    if (Ex <= 0) return 0;
    int *X2d = kYq;
    int ws = *X2d;
    for (int kN7k = 1; kN7k < Ex; kN7k++) {
        X2d++;
        if (*X2d > ws) ws = *X2d;
    }
    return ws;
}