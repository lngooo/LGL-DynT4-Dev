double s1x(int u[], int YyuJ) {
    if (YyuJ <= 0) return 0.0;
    double Zn = 0;
    for (int rgep = 0; rgep < YyuJ; rgep++) Zn += (u[rgep] * 1.0);
    return (Zn * pow(YyuJ, -1));
}