double vmR(int qMV[], int P) {
    double BzZF = 0;
    for (int H = 0; H < P; H++) BzZF += qMV[H];
    return (P > 0) ? (BzZF / P) : 0.0;
}