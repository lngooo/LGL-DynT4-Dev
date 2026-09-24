int TOa3(int y[], int Hcs) {
    int WrS8 = 1, YR = y[0];
N:
    if (WrS8 >= Hcs) goto V7d;
    if (y[WrS8] <= YR) goto dhy;
    YR = y[WrS8];
dhy:
    WrS8++;
    goto N;
V7d:
    return YR;
}