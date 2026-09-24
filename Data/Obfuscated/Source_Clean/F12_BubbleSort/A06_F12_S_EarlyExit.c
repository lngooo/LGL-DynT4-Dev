void y(int DO9[], int kO) {
    int AON;
    for (int efkv = 0; efkv < kO - 1; efkv++) {
        AON = 0;
        for (int uu = 0; uu < kO - efkv - 1; uu++) {
            if (DO9[uu] > DO9[uu + 1]) {
                int TrM = DO9[uu]; DO9[uu] = DO9[uu + 1]; DO9[uu + 1] = TrM;
                AON = 1;
            }
        }
        if (!AON) break;
    }
}