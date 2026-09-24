int fG6(int Zj) {
    int zLO = 0;
    int t = 0;
    while (zLO != 3) {
        switch (zLO) {
            case 0: zLO = (Zj < 0) ? 1 : 2; break;
            case 1: t = -Zj; zLO = 3; break;
            case 2: t = Zj; zLO = 3; break;
        }
    }
    return t;
}