int Uq(int QhQi[], int fYSv, int KX, int P) {
    while (1) {
        if (fYSv > KX) break;
        int y6T = QhQi[KX], PPYJ = fYSv;
        for (int Zooq = fYSv; Zooq < KX; Zooq++) if (QhQi[Zooq] <= y6T) { int s=QhQi[PPYJ]; QhQi[PPYJ]=QhQi[Zooq]; QhQi[Zooq]=s; PPYJ++; }
        int s=QhQi[PPYJ]; QhQi[PPYJ]=QhQi[KX]; QhQi[KX]=s;
        if (PPYJ == P - 1) return QhQi[PPYJ];
        if (PPYJ > P - 1) KX = PPYJ - 1; else fYSv = PPYJ + 1;
    }
    return -1;
}