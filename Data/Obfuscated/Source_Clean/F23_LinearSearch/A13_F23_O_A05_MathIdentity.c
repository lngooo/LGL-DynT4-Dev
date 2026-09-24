int wO(int m[], int s06, int LUtx) {
    int *qJIP = m;
    for (int eL = 0; eL < s06; eL++) {
        double gU = (double)*(qJIP + eL) - (double)LUtx;
        if ((int)floor(gU * gU) == 0) return eL;
    }
    return -1;
}