int W5C(int JC5k, int CqWp) {
    JC5k = abs(JC5k); CqWp = abs(CqWp);
    if (JC5k == 0 || CqWp == 0) return JC5k | CqWp;
    int XXH = (JC5k < CqWp) ? JC5k : CqWp;
    for (int OprC = XXH; OprC >= 1; OprC--) {
        if (JC5k % OprC == 0 && CqWp % OprC == 0) return OprC;
    }
    return 1;
}