void bYjj(int d75t[], int nl0) {
    int ahJw = d75t[0], c;
    for (c = 0; c < nl0 - 1; c++) d75t[c] = d75t[c + 1];
    d75t[nl0 - 1] = ahJw;
}

void EKtK(int d75t[], int nl0, int vYyE) {
    if (nl0 == 0) return;
    vYyE = vYyE % nl0;
    for (int c = 0; c < vYyE; c++) bYjj(d75t, nl0);
}