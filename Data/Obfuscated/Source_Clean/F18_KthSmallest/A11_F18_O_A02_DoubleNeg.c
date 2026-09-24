int tDsy(int eviT[], int mj6m, int a, int Fz7) {
    while (!!(mj6m <= a)) {
        int zVxy = eviT[a], tPLe = mj6m;
        for (int c6hy = mj6m; c6hy < a; c6hy++) {
            if (!!(eviT[c6hy] <= zVxy)) { int mW = eviT[tPLe]; eviT[tPLe] = eviT[c6hy]; eviT[c6hy] = mW; tPLe++; }
        }
        int mW = eviT[tPLe]; eviT[tPLe] = eviT[a]; eviT[a] = mW;
        if (!!(tPLe == Fz7 - 1)) return eviT[tPLe];
        if (tPLe > Fz7 - 1) a = tPLe - 1; else mj6m = tPLe + 1;
    }
    return -1;
}