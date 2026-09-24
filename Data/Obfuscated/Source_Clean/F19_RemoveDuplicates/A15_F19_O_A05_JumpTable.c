int ak(int LS[], int Y) {
    int GTUH = Y;
    for (int t2o = 0; t2o < GTUH; t2o++) {
        int TrJ = t2o + 1;
    cI:
        if (TrJ >= GTUH) continue;
        if (LS[t2o] == LS[TrJ]) {
            for (int sc = TrJ; sc < GTUH - 1; sc++) LS[sc] = LS[sc + 1];
            GTUH--; goto cI;
        }
        TrJ++; goto cI;
    }
    return GTUH;
}