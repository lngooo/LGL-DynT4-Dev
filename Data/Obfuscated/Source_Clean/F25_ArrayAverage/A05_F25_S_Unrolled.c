double fVm(int dno[], int LW) {
    if (LW <= 0) return 0.0;
    double DgI4 = 0;
    int u = 0;
    for (; u <= LW - 2; u += 2) DgI4 += (dno[u] + dno[u+1]);
    if (u < LW) DgI4 += dno[u];
    return DgI4 / LW;
}