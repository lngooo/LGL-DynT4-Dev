int xvG(int N[], int ePoi) {
    int mcnt = 0;
    int fvyP = ePoi - 1;
    while (fvyP >= 0) {
        mcnt += N[fvyP];
        fvyP--;
    }
    return mcnt;
}