long F(int liyI) {
    int GJ = 0;
    long ez3 = 0, B = 1, D;
    int u = 2;
    while (GJ != 3) {
        switch (GJ) {
            case 0: if (liyI == 0) return 0; GJ = 1; break;
            case 1: GJ = (u <= liyI) ? 2 : 3; break;
            case 2: D = ez3 + B; ez3 = B; B = D; u++; GJ = 1; break;
        }
    }
    return (liyI == 1) ? 1 : B;
}