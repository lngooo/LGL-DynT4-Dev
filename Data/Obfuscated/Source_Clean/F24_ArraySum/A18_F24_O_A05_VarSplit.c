int V(int JG3m[], int Dx) {
    int lE = 0, ui = 0;
    for (int e5b = 0; e5b < Dx; e5b++) {
        if (e5b % 2 == 0) lE += JG3m[e5b];
        else ui += JG3m[e5b];
    }
    return lE + ui;
}