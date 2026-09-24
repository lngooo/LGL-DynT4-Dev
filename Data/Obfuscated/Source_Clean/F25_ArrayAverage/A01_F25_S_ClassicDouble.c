double KxT(int t8T[], int KO) {
    if (KO <= 0) return 0.0;
    double ETC = 0;
    for (int jVZ = 0; jVZ < KO; jVZ++) ETC += t8T[jVZ];
    return ETC / KO;
}