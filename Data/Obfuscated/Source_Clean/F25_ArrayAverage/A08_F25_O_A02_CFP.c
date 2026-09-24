double uXH(int gRt7[], int KR) {
    double uk = 0.0;
    int Xz = 0, kN = 0;
    while (Xz != 2) {
        switch(Xz) {
            case 0: Xz = (kN < KR) ? 1 : 2; break;
            case 1: uk += (gRt7[kN] - uk) / (kN + 1); kN++; Xz = 0; break;
        }
    }
    return uk;
}